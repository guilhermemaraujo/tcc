#!/usr/bin/env python
# -*- coding: utf-8 -*-

import sys
import utils
import numpy as np

def main():
	# initial condicitions
	args = utils.get_user_args()

	# filename = 'data/diego/spring_tucson_interpolated'
	# filename = 'data/A002_cleaner_small'
	# filename = 'data/A002_cleaner_smaller'
	# filename = 'data/A002_cleaner_small_interpolated'
	filename = args.data_filename

	# data from diego's dissertation for validation --------------------------
	# filename = 'data/diego/spring_2019_recife_interpolated'
	# filename = 'data/diego/summer_2019_recife_interpolated'
	# filename = 'data/diego/autumn_2019_recife_interpolated'
	# filename = 'data/diego/winter_2019_recife_interpolated'
	# ------------------------------------------------------------------------
	data = utils.get_data_from_csv(filename)

	# in case your data is not paced by second
	# uncomment the lines bellow to interpolate it
	# data = utils.interpolate_data(data,toFile=filenameInt)
	if args.interpolate:
		filenameInt = '%s_interpolated.csv'%filename
		data = utils.interpolate_data(data,toFile=filenameInt)

	c_enable = args.model != 'no_control'
	size = len(data)

	timepoints = np.linspace(0, size, size) # time points
	timestampStart = str(data.iloc[[0]]['t_out'].to_dict().keys()[0])
	periods = len(timepoints)
	freq = '1S'

	simParams = {
	    'crop': args.crop,
	    'c_freq': args.c_freq*60,
	    'c_enable': c_enable,
	    'model':args.model,
	    'version':args.version,
	    'verbose': args.verbose,
	    'timepoints': timepoints,
	    'data': data
	}

	sim = utils.run_simulation(simParams)
	sim_result = sim[0]
	df_t_result = utils.build_dataframe(sim,t_start=timestampStart,periods=periods,freq=freq)

	utils.build_chart(df_t_result,c_enable=c_enable,sim_result=sim_result,show=args.plot_show)


try: main()
except KeyboardInterrupt: print '\n'