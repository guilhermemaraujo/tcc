#!/usr/bin/env python
# -*- coding: utf-8 -*-

import os
import sys
import signal
import argparse
import requests
import subprocess
import numpy as np
import pandas as pd
import matplotlib.dates as md
import matplotlib.pyplot as plt
from scipy.integrate import odeint
from simulation_result import SimResult
from simulator import temperature_model
from matplotlib.font_manager import FontProperties
from matplotlib import get_backend as matplotlib_get_backend

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
    main_dir = os.path.dirname(os.path.abspath(__file__))
    default_data_source = os.path.join(main_dir,'data/A002_cleaner_small_interpolated')
    parser = argparse.ArgumentParser(description='Run greenhouse simulation.')
    parser.add_argument('-m','--control-model', required=True, type=str, choices=['no_control','temperature_based_shift','temperature_based_t_out','time_based'], metavar='MODEL', dest='model',
        help='control model name')
    parser.add_argument('-d','--data', required=True, type=str, metavar='FILENAME', dest='data_filename',
        help='name of a valid csv file from the data directory')
    parser.add_argument('-f','--freq', default=1, type=int, choices=[1,2,5,10], metavar='N', dest='c_freq',
        help='frequency, in minutes, on which the controller will be checked')
    parser.add_argument('-c','--crop', default=2, type=int, choices=[1,2,3], metavar='N', dest='crop',
        help='ideal climatic condition of the plantation: warm (1), moderate (2) or cool (3)')
    parser.add_argument('-i','--interpolate', action='store_true', dest='interpolate',
        help='interpolates data retrieved from csv file')
    parser.add_argument('-v','--control-version', required=True, type=int, metavar='N', dest='version',
        help='control model version')
    parser.add_argument('--verbose', action='store_true', dest='verbose',
        help='print to console each response from the controller')
    parser.add_argument('--plot', action='store_true', dest='plot_show',
        help='display chart')
    
    return parser.parse_args()

def start_controller(params):
    global c_process, verbose

    try: c_process
    except NameError: c_process = False

    if verbose: console_log('Starting controller')

    main_dir = os.path.dirname(os.path.abspath(__file__))
    version = 'v'+str(params['version'])
    controller_dir = os.path.join(main_dir, os.pardir, 'controller',params['model'],version)
    controller_dir = os.path.abspath(controller_dir)
    makefile = os.path.join(controller_dir,'Makefile')
    ex = os.path.join(controller_dir,'greenhouse_sim')

    if not os.path.exists(makefile):
        print 'No such file or directory: %s' % makefile
        sys.exit(1)

    os.chdir(controller_dir)
    e = os.system('make full >/dev/null 2>&1')
    DEVNULL = open(os.devnull, 'wb')
    c_process = subprocess.Popen(ex, stdout=DEVNULL, stderr=DEVNULL, shell=True, preexec_fn=os.setsid)
    os.chdir(main_dir)

    if not test_controller_connection():
        console_log("Error: unable to establish connection with controller NONE\n",True)
        sys.exit(1)
    

def stop_controller(params):
    global c_process, verbose
    
    if verbose: console_log('Stopping controller')

    if c_process != False:
        os.killpg(os.getpgid(c_process.pid), signal.SIGTERM)
        main_dir = os.path.dirname(os.path.abspath(__file__))
        version = 'v'+str(params['version'])
        controller_dir = os.path.join(main_dir, os.pardir, 'controller',params['model'],version)
        controller_dir = os.path.abspath(controller_dir)
        os.chdir(controller_dir)
        e = os.system('make clean >/dev/null 2>&1')
        os.chdir(main_dir)

def console_log(m,overwrite=False):
    global command_count
    
    try: command_count
    except NameError: command_count = 1

    if overwrite:
        sys.stdout.write("\r%i. %s" % (command_count,m))
        sys.stdout.flush()
    else:
        sys.stdout.write("%i. %s\n" % (command_count,m))
        command_count += 1

def test_controller_connection():
    global c_process
    return c_process.poll() is None


def get_controller_response(_t_in,_t_out,timeInt,crop):
    url = 'http://localhost:8080'
    _t_in = int(float(_t_in)*10.0)
    _t_out = int(float(_t_out)*10.0)
    params = {'crop':crop, 't_in':_t_in, 't_out':_t_out, 'time':timeInt}
    #print params
    try:
        r = requests.get(url=url, params=params).json()
        return {'number_heater': int(r['heating']),'cooling': int(r['cooling'])}
    except Exception as e:
        console_log("Error: unable to establish connection with controller\n",True)
        sys.exit(1)

def get_greenhouse_config(configuration):
    return {
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

def run_simulation(params):
    global verbose,command_count
    
    verbose = params.get('verbose',True) # print to console each response from the controller
    
    if verbose: console_log('Setting up inital settings')

    # settings
    data = params.get('data')
    t = params.get('timepoints')
    c_model = params.get('model','no_control') # control model
    c_enable = c_model != 'no_control' # enable control
    c_freq = params.get('c_freq',1) # frequency on which the controller is checked, in seconds
    crop = params.get('crop',2) # ideal climatic condition of the plantation: warm (1), moderate (2) or cool (3)
    version = 'v'+str(params['version']) # control version
    size = len(data)
    # initial state
    _t_in = data['t_out'][0]
    temp_in_c = np.empty_like(t)
    temp_in_c[0] = _t_in
    temp_out = np.empty_like(t)
    temp_out[0] = _t_in
    sys_state = {'cooling':0,'number_heater':0}
    # analytiics settings and initial state
    ranges = get_temperature_ideal_ranges(crop)

    if c_enable:
        start_controller(params)

    sim_result = SimResult(size)
    sim_result.set_control_settings(c_enable,c_model,version,c_freq)
    
    for i in range(1,size):
        greenhouse_config_c = get_greenhouse_config(data.iloc[[i]])
        date_out = greenhouse_config_c['date_out']
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
            _t_out = greenhouse_config_c['t_out']
            controller_response = get_controller_response(_t_in,_t_out,time_int,crop)
            sys_state['cooling'] = controller_response['cooling']
            sys_state['number_heater'] = controller_response['number_heater']
            
            sim_result.add_record(date_out,_t_in,sys_state)

            if sys_state['number_heater'] > 0:
                actuator = 'heating'
                sim_result.add_time_actuator_on(actuator,c_freq)
            elif sys_state['cooling'] > 0:
                actuator = 'cooling'
                sim_result.add_time_actuator_on(actuator,c_freq)


        greenhouse_config_c['cooling'] = sys_state['cooling']
        greenhouse_config_c['number_heater'] = sys_state['number_heater']
        greenhouse_config_c.pop('date_out', None)

        tspan = [t[i-1], t[i]]
        result = odeint(temperature_model, _t_in, tspan, args=(greenhouse_config_c,))
        temp_in_c[i] = result[1][0]
        temp_out[i] = greenhouse_config_c['t_out']
        _t_in = result[1][0]
    
        if verbose:
            percent = int(round((float(i)/float(size))*100))
            console_log("Simulation progress: %i%s%s" % (percent,'%','\n' if i==(size-1) else ' '),True)
            # console_log("Simulation progress: %i/%i (%s%s)%s" % (i,size,percent,'%','\n' if i==(size-1) else ' '),True)
            if i==(size-1):
                command_count += 1

    if c_enable:
        stop_controller(params)

    output = sim_result.output()

    console_log('Results: %s' % (sim_result.metadata['dir']))

    if verbose:
        console_log('Summary: ')
        print output

    return [sim_result,temp_in_c,temp_out]

def build_dataframe(sim,**kwargs):
    # sim_result,temp_in_c,temp_out,temp_in = sim
    sim_result,temp_in_c,temp_out = sim
    t_start = kwargs.get('t_start')
    periods = kwargs.get('periods')
    freq = kwargs.get('freq','1S')
    date_t = pd.date_range(t_start, periods=periods, freq=freq)
    df_conf = {'Inside temperature (controlled)':temp_in_c, 'Outside temperature':temp_out}    
    return pd.DataFrame(df_conf, index=pd.Index(date_t, name='date'))

def build_chart(df_t_result,c_enable=True,sim_result=False,show=False):
    #plt.gca().xaxis.set_major_formatter(md.DateFormatter('%d/%m %Hh'))
    # plt.gca().xaxis.set_major_formatter(md.DateFormatter('%H:%M:%S'))
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
        "Min. temperature (night)",
        "Max. temperature (night)",
        "Min. temperature (day)",
        "Max. temperature (day)"
    ]

    if not c_enable:
        items[0] = "Inside temperature"

    plt.legend(items,prop=fontP,loc='best')
    plt.xlabel('Time of day')
    plt.ylabel('Temperature ($^\circ$C)')
    # plt.ylim(0,35)
    plt.ylim(5,35)
    plt.grid(True)
    
    # Maximise the plotting window
    plot_backend = matplotlib_get_backend()
    mng = plt.get_current_fig_manager()
    if plot_backend == 'TkAgg':
        mng.resize(*mng.window.maxsize())
    elif plot_backend == 'wxAgg':
        mng.frame.Maximize(True)
    elif plot_backend == 'Qt4Agg':
        mng.window.showMaximized()

    plt.tight_layout()
    plt.savefig(sim_result.metadata['figure_pathname'])

    if show:
        plt.show()