#!/usr/bin/env python
# -*- coding: utf-8 -*-

import os
import json
import sys
import numpy as np
from pprint import pprint

class SimResult:
    def __init__(self,size):        
        # self.__dict__.update(d4)
        self._points_within_ideal = 0.0
        self._entries_count = size
        self._t_actuators_on = {'heating':0,'cooling':0}
        self.percent_within_ideal = 0.0
        self.energy_expenditure = 0.0
        self.log = {}
        self.metadata = {}
        self.control = {'enabled':False,'version':False,'model':'no_control','frequency':False}
        self.error = {
            'above':{'day':{'max':0.0,'_points':[]},'night':{'max':0.0,'_points':[]},'max':0.0,'_points':[]},
            'bellow':{'day':{'max':0.0,'_points':[]},'night':{'max':0.0,'_points':[]},'max':0.0,'_points':[]},
            'absolute':{'day':{'max':0.0,'_points':[]},'night':{'max':0.0,'_points':[]},'max':0.0,'_points':[]}
        }

    def set_control_settings(self,c_enable,model,version,freq):
        self.control['enabled'] = bool(c_enable)
        self.control['model'] = model
        self.control['version'] = version
        self.control['frequency'] = int(freq)        

    def output(self):
        self._calc_percent_within_ideal()
        self._calc_energy_expenditure()
        self._set_metadata()
        # do not change the order of the func. calls bellow
        self._set_error_absolute_values()
        self._calc_error_maxs()
        self._calc_error_avgs()
        self._clear_private_attr()
        # -------------------------------------------------
        temp_log = self.log
        temp_model = self.control['model']
        temp_metadata = self.metadata
        temp_error = self.error

        del self.metadata
        if self.control['model'] == 'no_control':
            del self.control['model']

        dump = json.dumps(self.__dict__, sort_keys=True, indent=4)
        with open(temp_metadata['status_log'],'w') as f_out:
            f_out.write(dump)

        del self.log
        del self.error['above']
        del self.error['bellow']
        dump = json.dumps(self.__dict__, sort_keys=True, indent=2)
        
        self.log = temp_log
        self.control['model'] = temp_model
        self.metadata = temp_metadata
        self.error = temp_error

        return dump

    def add_point_within_ideal(self):
        self._points_within_ideal += 1

    def add_time_actuator_on(self,a,t):
        self._t_actuators_on[a] += t

    def add_record(self,dt,temp,sys_state):
        record = {
          # 'timestamp':dt,
          'temperature':temp,
          'cooling':sys_state['cooling']>0,
          'heating':sys_state['number_heater']>0
        }
        self.log[dt] = record

    def add_error_point(self,orientation,shift,ts,p):
        self.error[orientation][shift]['_points'].append(p)
        self.error[orientation]['_points'].append(p)

    def _set_metadata(self):
        # set result directory path
        sim_dir = os.path.dirname(os.path.abspath(__file__))
        d_base = os.path.join(sim_dir, os.pardir, 'results')
        if self.control['enabled']:
            c_freq = 'f%s'%(str(self.control['frequency']/60).zfill(2))
            d_name = 'c_%s_%s'%(self.control['model'],self.control['version'])
            d_name = d_name.rstrip('_')
            d_name = os.path.join(d_name,c_freq)
        else:
            d_name = 'no_control'

        d_result = os.path.join(d_base,d_name)
        metadata_dir = os.path.abspath(d_result)

        # f = lambda d:d.split(' ')[1].split(':')[0]
        f = lambda d:d.replace(' ','_')
        log = map(f,self.log.keys())
        log.sort()
        hour_range = '%s-%s' % (log[0],log[-1])

        # set result figure full path
        fig_file = os.path.join(metadata_dir,hour_range+'.png')
        metadata_figure_pathname = os.path.abspath(fig_file)
        
        # set result figure full path
        status_file = os.path.join(metadata_dir,hour_range+'.json')
        metadata_status_log = os.path.abspath(status_file)

        try:
            if not os.path.exists(metadata_dir):
                os.makedirs(metadata_dir)
            self.metadata['dir'] = metadata_dir
            self.metadata['figure_pathname'] = metadata_figure_pathname
            self.metadata['status_log'] = metadata_status_log
        except Exception as e:
            print 'Creation of the directory "%s" failed' % metadata_dir
            sys.exit(1)

    def _calc_energy_expenditure(self): #kw/h
        # heater
        h_watt = 75000
        h_hours = self._t_actuators_on['heating']/3600
        h_energy_expenditure = (h_watt*h_hours)/1000
        # cooling
        c_watt = 128000
        c_hours = self._t_actuators_on['cooling']/3600
        c_energy_expenditure = (c_watt*c_hours)/1000

        self.energy_expenditure = h_energy_expenditure + c_energy_expenditure

    def _calc_percent_within_ideal(self):
        self.percent_within_ideal = (float(self._points_within_ideal)/float(self._entries_count))*100.0

    def _set_error_absolute_values(self):
        bellow = self.error['bellow']
        above = self.error['above']
        self.error['absolute']['day']['_points'] = bellow['day']['_points'] + above['day']['_points']
        self.error['absolute']['night']['_points'] = bellow['night']['_points'] + above['night']['_points']
        self.error['absolute']['_points'] = bellow['_points'] + above['_points']

    def _calc_error_maxs(self):
        self.error['bellow']['day']['max'] = max(self.error['bellow']['day']['_points'] or [0.0])
        self.error['bellow']['night']['max'] = max(self.error['bellow']['night']['_points'] or [0.0])
        self.error['bellow']['max'] = max(self.error['bellow']['_points'] or [0.0])
        self.error['above']['day']['max'] = max(self.error['above']['day']['_points'] or [0.0])
        self.error['above']['night']['max'] = max(self.error['above']['night']['_points'] or [0.0])
        self.error['above']['max'] = max(self.error['above']['_points'] or [0.0])
        self.error['absolute']['day']['max'] = max(self.error['absolute']['day']['_points'] or [0.0])
        self.error['absolute']['night']['max'] = max(self.error['absolute']['night']['_points'] or [0.0])
        self.error['absolute']['max'] = max(self.error['absolute']['_points'] or [0.0])

    def _calc_error_avgs(self):
        self.error['bellow']['day']['avg'] = np.mean(self.error['bellow']['day']['_points'] or [0.0])
        self.error['bellow']['night']['avg'] = np.mean(self.error['bellow']['night']['_points'] or [0.0])
        self.error['bellow']['avg'] = np.mean(self.error['bellow']['_points'] or [0.0])
        self.error['above']['day']['avg'] = np.mean(self.error['above']['day']['_points'] or [0.0])
        self.error['above']['night']['avg'] = np.mean(self.error['above']['night']['_points'] or [0.0])
        self.error['above']['avg'] = np.mean(self.error['above']['_points'] or [0.0])
        self.error['absolute']['day']['avg'] = np.mean(self.error['absolute']['day']['_points'] or [0.0])
        self.error['absolute']['night']['avg'] = np.mean(self.error['absolute']['night']['_points'] or [0.0])
        self.error['absolute']['avg'] = np.mean(self.error['absolute']['_points'] or [0.0])

    def _clear_private_attr(self):
        self.error['bellow']['day'].pop('_points',None)
        self.error['bellow']['night'].pop('_points',None)
        self.error['bellow'].pop('_points',None)
        self.error['above']['day'].pop('_points',None)
        self.error['above']['night'].pop('_points',None)
        self.error['above'].pop('_points',None)
        self.error['absolute']['day'].pop('_points',None)
        self.error['absolute']['night'].pop('_points',None)
        self.error['absolute'].pop('_points',None)
        del self._points_within_ideal
        del self._entries_count
        del self._t_actuators_on