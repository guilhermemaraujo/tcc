#!/usr/bin/env python
# -*- coding: utf-8 -*-

import sys
import json
import math
import requests
import numpy as np
import pandas as pd
from datetime import datetime
from scipy.integrate import odeint
from simulator import temperature_model

# Original functions ------------
def parser(x):
	return datetime.strptime('03/01/19 '+x, '%m/%d/%y %H:%M')

def get_data_from_csv(filename):
    try:
        return pd.read_csv(filename + ".csv", header=0, parse_dates=[0], index_col=0,squeeze=True)
        # return pd.read_csv(filename + ".csv", header=0, parse_dates=[0], index_col=0,
        #                    squeeze=True, date_parser=parser)
    except IOError as e:
        print "Could not open this file. Make sure the file name or path is correct."
        sys.exit(1)
    except KeyError as e:
        print e.message + '. Verify the column names of file.'
        sys.exit(1)

# Extensions ----------------------
def get_controller_response(_t_in,timeInt,crop):
    cfix = lambda f: float(f)/60.0
    url = 'http://localhost:8080'
    _t_in = math.round(float(_t_in))
    params = {'crop':crop, 't_in':_t_in, 'time':timeInt}
    #print params
    r = requests.get(url=url, params=params)
    response = r.json()

    h = int(response['heating'])
    c = int(response['cooling'])
    if c > 0:
        # c = cfix(7.4)
        c = cfix(14.8)
    else:
        c = 0
    return {'cooling':c, 'heating':h}

def interpolate_data(data,toFile=False):
    data = data.resample('1S').interpolate()
    if toFile:
        data.to_csv(r'%s'%toFile,header=True)
    return data

def get_greenhouse_config(data):
    greenhouse_config = []
    size = len(data)
    for i in range(size):
        configuration = data.iloc[[i]]
        config = {
            "t_out": configuration["t_out"].values[0],
            "qgrout": configuration["sr_out"].values[0],
            "date_out": str(configuration['t_out'].to_dict().keys()[0]),
            "height": 4.0,
            # "cooling": 7.4/60,
            "cooling": 0,
            "glass_area": 674,
            "ground_area": 300,
            "transmittance_g_m": .90,
            "number_heater": 0,
            "heater_capacity": 75000,
            "ventilation_rate": 0.003,
            # "ventilation_rate": 0.029,
            # "ventilation_rate": 0.043,
            # "ventilation_rate": 0.086,
            "k" : 6.2
        }
        greenhouse_config.append(config)
    return greenhouse_config

def run_simulation(data,timepoints=False,enableControl=True,controlFreq=1,crop=2):
    # crop: determina se o plantio é de clima quente (1), moderado(2) ou frio (3)
    size = len(data)
    _t_in = data['t_out'][0]
    # _t_in_2 = data['t_out'][0]
    t = np.linspace(0,size,size) if isinstance(timepoints,bool) and not timepoints else timepoints
    # define greenhouse configs for each seconds
    greenhouse_config = get_greenhouse_config(data)
    # greenhouse_config_2 = get_greenhouse_config(data)
    # store soluction
    x = np.empty_like(t)
    y = np.empty_like(t)
    z = np.empty_like(t)
    x[0] = _t_in
    y[0] = _t_in
    # z[0] = _t_in_2
    
    for i in range(1, size, 1):
        if enableControl:
            if i%controlFreq == 0:
                date_out = greenhouse_config[i]['date_out']
                time_int = int(date_out.split()[1].split(':')[0])
                control = get_controller_response(_t_in,time_int,crop)        
                greenhouse_config[i]['cooling'] = control['cooling']
                greenhouse_config[i]['number_heater'] = control['heating']

                print str(date_out)+' | '+str(greenhouse_config[i]['cooling'])+' | '+str(_t_in)

            else:
                greenhouse_config[i]['cooling'] = greenhouse_config[i-1]['cooling']
                greenhouse_config[i]['number_heater'] = greenhouse_config[i-1]['number_heater']

        
        greenhouse_config[i].pop('date_out', None)
        # greenhouse_config_2[i].pop('date_out', None)

        tspan = [t[i-1], t[i]]

        result = odeint(temperature_model, _t_in, tspan, args=(greenhouse_config[i],))
        # result_2 = odeint(temperature_model, _t_in_2, tspan, args=(greenhouse_config_2[i],))

        x[i] = result[1][0]
        y[i] = greenhouse_config[i]['t_out']
        # z[i] = result_2[1][0]
        _t_in = result[1][0]
        # _t_in_2 = result_2[1][0]

    return {"in_c":x,"out":y}
    # return {"in_c":x,"out":y,"in":z}