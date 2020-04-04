#!/usr/bin/env python
# -*- coding: utf-8 -*-
import numpy as np
import pandas as pd
import matplotlib.dates as md
import matplotlib.pyplot as plt
from utils import get_data_from_csv, interpolate_data, run_simulation

# initial condicitions
#filename = 'data/A002_cleaner_small'
filename = 'data/A002_cleaner_small_interpolated'
data = get_data_from_csv(filename)

# in case your data is not paced by second
# uncomment the lines bellow to interpolate it
"""
filenameInt = '%s_interpolated.csv'%filename
data = interpolate_data(data,toFile=filenameInt)
"""

size = len(data)
timepoints = np.linspace(0, size, size) # time points
enableControl = True
controlFreq = 5 # frequency on which the controller is checked, in seconds
crop = 2
timestampStart = str(data.iloc[[0]]['t_out'].to_dict().keys()[0])
periods = len(timepoints)
freq = '1S'

result = run_simulation(data=data,timepoints=timepoints,enableControl=enableControl,controlFreq=controlFreq,crop=crop)
[x,y] = [result['in'],result['out']]

date_t = pd.date_range(timestampStart, periods=periods, freq=freq)

df_t_result = pd.DataFrame({'Inside temperature':x,'Outside temperature':y}, index=pd.Index(date_t, name='date'))

ax = plt.gca()
#ax.xaxis.set_major_formatter(md.DateFormatter('%d/%m %Hh'))
ax.xaxis.set_major_formatter(md.DateFormatter('%H:%M'))

plt.plot(df_t_result)

plt.xlabel('Time of day')
plt.ylabel('Temperature ($^\circ$C)')
plt.grid(True)
plt.show()
