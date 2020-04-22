#!/usr/bin/env python
# -*- coding: utf-8 -*-
import numpy as np
import pandas as pd
import matplotlib.dates as md
import matplotlib.pyplot as plt
from matplotlib.font_manager import FontProperties
from utils import get_data_from_csv, interpolate_data, run_simulation

# initial condicitions

# filename = 'data/diego/spring_tucson_interpolated'
# filename = 'data/A002_cleaner_small'
# filename = 'data/A002_cleaner_small_interpolated'

# data from diego's dissertation for validation --------------------------
filename = 'data/diego/spring_2019_recife_interpolated'
# filename = 'data/diego/summer_2019_recife_interpolated'
# filename = 'data/diego/autumn_2019_recife_interpolated'
# filename = 'data/diego/winter_2019_recife_interpolated'
# ------------------------------------------------------------------------
data = get_data_from_csv(filename)

# in case your data is not paced by second
# uncomment the lines bellow to interpolate it
# filenameInt = '%s_interpolated.csv'%filename
# data = interpolate_data(data,toFile=filenameInt)


size = len(data)
timepoints = np.linspace(0, size, size) # time points
enableControl = False
controlFreq = 60*10 # frequency on which the controller is checked, in seconds
crop = 2
timestampStart = str(data.iloc[[0]]['t_out'].to_dict().keys()[0])
periods = len(timepoints)
freq = '1S'

result = run_simulation(data=data,timepoints=timepoints,enableControl=enableControl,controlFreq=controlFreq,crop=crop)
[x,y] = [result['in_c'],result['out']]
# [x,y,z] = [result['in_c'],result['out'],result['in']]

date_t = pd.date_range(timestampStart, periods=periods, freq=freq)
df_conf = {'Inside temperature (controlled)':x,'Outside temperature':y}
# df_conf = {'Inside temperature (controlled)':x,'Outside temperature':y, 'Inside temperature':z}
df_t_result = pd.DataFrame(df_conf, index=pd.Index(date_t, name='date'))

#plt.gca().xaxis.set_major_formatter(md.DateFormatter('%d/%m %Hh'))
plt.gca().xaxis.set_major_formatter(md.DateFormatter('%H:%M'))
plt.plot(df_t_result)

# plt.axhline(y=16,ls='--',lw=1.5,c='darkgray')
# plt.axhline(y=18,ls='--',lw=1.5,c='#333333')
# plt.axhline(y=24,ls='--',lw=1.5,c='lightcoral')
# plt.axhline(y=27,ls='--',lw=1.5,c='darkorange')

items = ["Inside temperature","Outside temperature"]
# items = ["Inside temperature","Inside temperature (controlled)","Outside temperature","Min. temperature (night time)","Max. temperature (night time)","Min. temperature (day time)","Max. temperature (day time)"]
fontP = FontProperties()
fontP.set_size('x-small')
plt.legend(items,prop=fontP,loc='best')

plt.xlabel('Time of day')
plt.ylabel('Temperature ($^\circ$C)')
plt.grid(True)
plt.show()