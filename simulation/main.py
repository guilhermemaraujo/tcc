#!/usr/bin/env python
# -*- coding: utf-8 -*-
import numpy as np
from utils import get_data_from_csv, interpolate_data, run_simulation, build_dataframe, build_chart, get_user_args

# initial condicitions
args = get_user_args()

# filename = 'data/diego/spring_tucson_interpolated'
# filename = 'data/A002_cleaner_small'
# filename = 'data/A002_cleaner_smaller'
filename = 'data/A002_cleaner_small_interpolated'

# data from diego's dissertation for validation --------------------------
# filename = 'data/diego/spring_2019_recife_interpolated'
# filename = 'data/diego/summer_2019_recife_interpolated'
# filename = 'data/diego/autumn_2019_recife_interpolated'
# filename = 'data/diego/winter_2019_recife_interpolated'
# ------------------------------------------------------------------------
data = get_data_from_csv(filename)

# in case your data is not paced by second
# uncomment the lines bellow to interpolate it
# filenameInt = '%s_interpolated.csv'%filename
# data = interpolate_data(data,toFile=filenameInt)
# data = interpolate_data(data,toFile=False)

size = len(data)
timepoints = np.linspace(0, size, size) # time points
timestampStart = str(data.iloc[[0]]['t_out'].to_dict().keys()[0])
periods = len(timepoints)
freq = '1S'

simParams = {
    'crop': args.crop,
    'c_freq': args.c_freq*60,
    'c_enable': args.c_enable,
    'verbose': args.verbose,
    'both': args.both,
    'timepoints': timepoints,
    'data': data,
    'output_to_file': args.output_to_file
}

sim = run_simulation(simParams)
df_t_result = build_dataframe(sim,t_start=timestampStart,periods=periods,freq=freq)

build_chart(df_t_result,c_enable=args.c_enable,both=args.both)