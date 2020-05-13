#!/usr/bin/env python
# -*- coding: utf-8 -*-

import sys
import json
import math
import requests
import argparse
import numpy as np
import pandas as pd
import matplotlib.dates as md
import matplotlib.pyplot as plt
from matplotlib.font_manager import FontProperties
from datetime import datetime
from scipy.integrate import odeint
from simulator import temperature_model
from simulation_result import SimResult

# Original functions ------------
def get_data_from_csv(filename):
    try:
        return pd.read_csv(filename + ".csv", header=0, parse_dates=[0], index_col=0,squeeze=True)
    except IOError as e:
        print "Could not open this file. Make sure the file name or path is correct."
        sys.exit(1)
    except KeyError as e:
        print e.message + '. Verify the column names of file.'
        sys.exit(1)

# Extensions ----------------------
def str_datetime_to_int(dt):
    return int(dt.split()[1].split(':')[0])

def get_shift(t):
    return 'day' if t>=6 and t<18 else 'night'

def interpolate_data(data,toFile=False):
    data = data.resample('1S').interpolate()
    if toFile:
        data.to_csv(r'%s'%toFile,header=True)
    return data

def get_temperature_ideal_ranges(crop='2'):
    ranges = {
        '1':{'day':{'max':38.0,'min':27.0}, 'night':{'max':27.0,'min':24.0}},
        '2':{'day':{'max':27.0,'min':24.0}, 'night':{'max':18.0,'min':16.0}},
        '3':{'day':{'max':27.0,'min':21.0}, 'night':{'max':16.0,'min':10.0}}
    }
    crop = str(crop)
    ret = ranges[crop] if crop in ranges else ranges['2']
    return ret

def get_user_args():
    parser = argparse.ArgumentParser(description='Run greenhouse simulation.')
    parser.add_argument('--no-control', action='store_false', dest='c_enable',
        help='disable controll')
    parser.add_argument('-f','--freq', default=1, type=int, choices=[1,2,5,10], metavar='N', dest='c_freq',
        help='frequency, in minutes, on which the controller will be checked')
    parser.add_argument('-c','--crop', default=2, type=int, choices=[1,2,3], metavar='N', dest='crop',
        help='ideal climatic condition of the plantation: warm (1), moderate (2) or cool (3)')
    parser.add_argument('-v','--verbose', action='store_true', dest='verbose',
        help='print to console each response from the controller')
    parser.add_argument('-o','--output-to-file', default=False, metavar='PATHNAME', dest='output_to_file',
        help='path to a file to which the results of the simulation will be logged')
    parser.add_argument('--plot-both', action='store_true', dest='both',
        help='plot on the chart both controlled and uncontrolled temperature variations')
    
    return parser.parse_args()


def get_controller_response(_t_in,_t_out,timeInt,crop):
    cfix = lambda f: float(f)/60.0
    url = 'http://localhost:8080'
    # c_power = 7.4
    c_power = 14.8

    _t_in = int(float(_t_in)*10.0)
    _t_out = int(float(_t_out)*10.0)
    params = {'crop':crop, 't_in':_t_in, 't_out':_t_out, 'time':timeInt}
    #print params
    r = requests.get(url=url, params=params).json()
    ret = {
        'model': r['model'],
        'number_heater': int(r['heating']),
        'cooling': cfix(c_power) if int(r['cooling'])>0 else 0
    }

    return ret

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
            # "transmittance_s_c":(1 - 0.3),
            # "transmittance_s_c":(1 - 0.5),
            "transmittance_s_c":(1 - 0.7),
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
    # settings
    data = params.get('data')
    t = params.get('timepoints')
    c_enable = params.get('c_enable',True) # enable control
    both = params.get('both',False) # calculate both controlled and uncontrolled temperature variations within the greenhouse
    verbose = params.get('verbose',True) # print to console each response from the controller
    output_to_file = params.get('output_to_file',False) # output result to console, a file or both
    c_freq = params.get('c_freq',1) # frequency on which the controller is checked, in seconds
    crop = params.get('crop',2) # ideal climatic condition of the plantation: warm (1), moderate (2) or cool (3)
    size = len(data)
    # initial state
    _t_in = data['t_out'][0]
    greenhouse_config_c = get_greenhouse_config(data)
    temp_in_c = np.empty_like(t)
    temp_out = np.empty_like(t)
    temp_in_c[0] = _t_in
    temp_out[0] = _t_in
    sys_state = {'cooling':0,'number_heater':0}
    # analytiics settings and initial state
    c_model = 'no_control'
    ranges = get_temperature_ideal_ranges(crop)
    sim_result = SimResult(size)

    if c_enable and both:
        _t_in_2 = data['t_out'][0]
        greenhouse_config = get_greenhouse_config(data)
        temp_in = np.empty_like(t)
        temp_in[0] = _t_in_2

    for i in range(1, size, 1):
        date_out = greenhouse_config_c[i]['date_out']
        time_int = str_datetime_to_int(date_out)
        # checking percentage of time within ideal temperature range        
        shift = get_shift(time_int)
        rshift = ranges[shift]
        within_ideal = _t_in >= rshift['min'] and _t_in < rshift['max']

        if within_ideal:
            sim_result.add_point_within_ideal()
        else:            
            if _t_in < rshift['min']:
                orientation = 'bellow'
                ref = 'min'
            else:
                orientation = 'above'
                ref = 'max'
            p = abs(_t_in - rshift[ref])
            sim_result.add_error_point(orientation,shift,date_out,p)
        # ----------------------------------------------------------
        if c_enable and i%c_freq == 0:
            _t_out = greenhouse_config_c[i]['t_out']
            controller_response = get_controller_response(_t_in,_t_out,time_int,crop)
            sys_state['cooling'] = controller_response['cooling']
            sys_state['number_heater'] = controller_response['number_heater']
            c_model = controller_response['model']

            sim_result.add_record(date_out,_t_in,sys_state,c_model,verbose=verbose)

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

    sim_result.output(output_to_file)

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
    plt.gca().xaxis.set_major_formatter(md.DateFormatter('%H:%M:%S'))
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
        "Min. temperature (night)",
        "Max. temperature (night)",
        "Min. temperature (day)",
        "Max. temperature (day)"
    ]

    if not c_enable:
        items[0] = "Inside temperature"
    elif both:
        items.insert(0, "Inside temperature")

    plt.legend(items,prop=fontP,loc='best')
    plt.xlabel('Time of day')
    plt.ylabel('Temperature ($^\circ$C)')
    # plt.ylim(0,35)
    plt.ylim(5,35)
    plt.grid(True)
    plt.show()