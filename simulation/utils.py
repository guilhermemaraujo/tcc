#!/usr/bin/env python
# -*- coding: utf-8 -*-

import sys
import json
import math
import requests
import numpy as np
import pandas as pd
import matplotlib.dates as md
import matplotlib.pyplot as plt
from matplotlib.font_manager import FontProperties
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
    _t_in = round(float(_t_in))
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
    return {'cooling':c, 'number_heater':h}

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
            "cooling": 0,
            "glass_area": 674,
            "ground_area": 300,
            "transmittance_g_m": 0.87,
            "transmittance_s_c":0.3,
            "number_heater": 0,
            "heater_capacity": 75000,
            # "ventilation_rate": 0.003,
            # "ventilation_rate": 0.014,
            # "ventilation_rate": 0.029,
            "ventilation_rate": 0.043,
            # "ventilation_rate": 0.086,
            "k" : 6.2
        }
        greenhouse_config.append(config)
    return greenhouse_config

def run_simulation(params):
    data = params.get('data')
    t = params.get('timepoints')
    c_enable = params.get('c_enable',True) # enable control
    both = params.get('both',False) # calc. both controlled and uncontrolled temperatura within the greenhouse
    c_freq = params.get('c_freq',1) # frequency on which the controller is checked, in seconds
    crop = params.get('crop',2) # ideal climatic condition of the plantation: hot (1), moderate (2) or cold (3)

    size = len(data)
    _t_in = data['t_out'][0]
    greenhouse_config_c = get_greenhouse_config(data)
    temp_in_c = np.empty_like(t)
    temp_out = np.empty_like(t)
    temp_in_c[0] = _t_in
    temp_out[0] = _t_in
    sys_state = {'cooling':0,'number_heater':0}

    if c_enable and both:
        _t_in_2 = data['t_out'][0]
        greenhouse_config = get_greenhouse_config(data)
        temp_in = np.empty_like(t)
        temp_in[0] = _t_in_2


    for i in range(1, size, 1):
        if c_enable and i%c_freq == 0:
            date_out = greenhouse_config_c[i]['date_out']
            time_int = int(date_out.split()[1].split(':')[0])
            controller_response = get_controller_response(_t_in,time_int,crop)
            sys_state['cooling'] = controller_response['cooling']
            sys_state['number_heater'] = controller_response['number_heater']

            print '%s | t: %f | C: %s; H: %s' % (str(date_out),_t_in,sys_state['cooling']>0,sys_state['number_heater']>0)

        greenhouse_config_c[i]['cooling'] = sys_state['cooling']
        greenhouse_config_c[i]['number_heater'] = sys_state['number_heater']
        greenhouse_config_c[i].pop('date_out', None)

        tspan = [t[i-1], t[i]]
        result = odeint(temperature_model, _t_in, tspan, args=(greenhouse_config_c[i],))
        temp_in_c[i] = result[1][0]
        temp_out[i] = greenhouse_config_c[i]['t_out']
        _t_in = result[1][0]
        
        if c_enable and both:
            greenhouse_config[i].pop('date_out', None)
            result_2 = odeint(temperature_model, _t_in_2, tspan, args=(greenhouse_config[i],))
            temp_in[i] = result_2[1][0]
            _t_in_2 = result_2[1][0]

    return [temp_in_c,temp_out,temp_in if c_enable and both else None]

def build_dataframe(sim,**kwargs):
    temp_in_c,temp_out,temp_in = sim
    t_start = kwargs.get('t_start')
    periods = kwargs.get('periods')
    freq = kwargs.get('freq','1S')

    date_t = pd.date_range(t_start, periods=periods, freq=freq)
    df_conf = {'Inside temperature (controlled)':temp_in_c, 'Outside temperature':temp_out}
    if temp_in is not None:
        df_conf['Inside temperature']=temp_in
    
    return pd.DataFrame(df_conf, index=pd.Index(date_t, name='date'))

def build_chart(df_t_result,c_enable=True,both=False):
    #plt.gca().xaxis.set_major_formatter(md.DateFormatter('%d/%m %Hh'))
    plt.gca().xaxis.set_major_formatter(md.DateFormatter('%H:%M'))
    plt.plot(df_t_result)

    plt.axhline(y=16,ls='--',lw=1.5,c='darkgray')
    plt.axhline(y=18,ls='--',lw=1.5,c='#333333')
    plt.axhline(y=24,ls='--',lw=1.5,c='lightcoral')
    plt.axhline(y=27,ls='--',lw=1.5,c='darkorange')

    fontP = FontProperties()
    fontP.set_size('x-small')
    items = [
        "Inside temperature (controlled)",
        "Outside temperature",
        "Min. temperature (night time)",
        "Max. temperature (night time)",
        "Min. temperature (day time)",
        "Max. temperature (day time)"
    ]

    if not c_enable:
        items[0] = "Inside temperature"
    elif both:
        items.insert(0, "Inside temperature")

    plt.legend(items,prop=fontP,loc='best')
    plt.xlabel('Time of day')
    plt.ylabel('Temperature ($^\circ$C)')
    plt.grid(True)
    plt.show()