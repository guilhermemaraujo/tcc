#!/usr/bin/env python
# -*- coding: utf-8 -*-

import requests
import numpy as np
from scipy.integrate import odeint
import matplotlib.pyplot as plt
import matplotlib.dates as md
from utils import get_data_from_csv
import pandas as pd
from simulator import temperature_model
import json

def controlResponse(_t_in,timeInt,crop):
    url = 'http://localhost:8080'
    params = {'crop':crop, 't_in':_t_in, 'time':timeInt}
    r = requests.get(url=url, params=params)
    response = r.json()
    
    #print response

    h = int(response['heating'])
    c = int(response['cooling'])
    if c > 0:
        c = 14.8
    else:
        c = 0
    return {'cooling':c, 'heating':h}


# initial condicitions
#data = get_data_from_csv('data/spring_tucson_interpolated')
data = get_data_from_csv('data/A002_cleaner')

_t_in = data['t_out'][0]
size = len(data)
# time points
t = np.linspace(0, len(data), size)

# store soluction
x = np.empty_like(t)
y = np.empty_like(t)
x[0] = _t_in
y[0] = _t_in

# define greenhouse configs for each seconds
greenhouse_config = []
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
        "transmittance_g_m": .90,
        "number_heater": 0,
        "heater_capacity": 75000,
        "ventilation_rate": 0.003,
        "k" : 6.2
    }
    greenhouse_config.append(config)

for i in range(1, size, 1):
    date_out = greenhouse_config[i]['date_out']
    time_int = int(date_out.split()[1].split(':')[0])
    crop = 2 # 1 = warm; 2 = moderate; 3 = cool; tomate => moderate
    control = controlResponse(_t_in,time_int,crop)

    if _t_in < 0:
    	break
    
    cooling = control['cooling']
    heating = control['heating']
    
    # comment this area to disable control -------------------
    greenhouse_config[i]['cooling'] = cooling
    greenhouse_config[i]['number_heater'] = heating
    # --------------------------------------------------------
    greenhouse_config[i].pop('date_out', None)

    tspan = [t[i-1], t[i]]

    result = odeint(temperature_model, _t_in, tspan, args=(greenhouse_config[i],))

    x[i] = result[1][0]
    y[i] = greenhouse_config[i]['t_out']
    _t_in = result[1][0]
    


date_t = pd.date_range('2018-07-19 23:00:00', periods=len(t), freq='1H')

df_t_in = pd.DataFrame({'Inside temperature per second':x}, index=pd.Index(date_t, name='date'))
df_t_out = pd.DataFrame({'Outside temperature per second':y}, index=pd.Index(date_t, name='date'))
df_t_result = pd.DataFrame({'Inside temperature':x,'Outside temperature':y}, index=pd.Index(date_t, name='date'))

ax = plt.gca()
ax.xaxis.set_major_formatter(md.DateFormatter('%d/%m %Hh'))
#ax.xaxis.set_major_formatter(md.DateFormatter('%d/%m'))

#plt.plot(df_t_in)
#plt.plot(df_t_out)
plt.plot(df_t_result)

plt.xlabel('Time of day')
plt.ylabel('Temperature ($^\circ$C)')
plt.grid(True)
plt.show()
