import json
import numpy as np
from pprint import pprint

class SimResult:
	def __init__(self,size):		
		# self.__dict__.update(d4)
		self._points_within_ideal = 0.0
		self._entries_count = size
		self.model = 'no_control'
		self.percent_within_ideal = 0.0
		self.energy_expenditure = False # @todo implement
		self.log = {}
		self.error = {
			'above':{'day':{'max':0.0,'_points':[]},'night':{'max':0.0,'_points':[]},'max':0.0,'_points':[]},
			'bellow':{'day':{'max':0.0,'_points':[]},'night':{'max':0.0,'_points':[]},'max':0.0,'_points':[]},
			'absolute':{'day':{'max':0.0,'_points':[]},'night':{'max':0.0,'_points':[]},'max':0.0,'_points':[]}
		}

	def output(self,to_file=False):
		self._calc_percent_within_ideal()
		# do not change the order of the func. calls bellow
		self._set_error_absolute_values()
		self._calc_error_maxs()
		self._calc_error_avgs()
		self._clear_private_attr()
		# -------------------------------------------------


		if to_file:
			dump = json.dumps(self.__dict__, indent=4)
			with open(to_file,'w') as f_out:
				f_out.write(dump)

		del self.log
		print json.dumps(self.__dict__, indent=4)

	def add_point_within_ideal(self):
		self._points_within_ideal += 1

	def add_record(self,dt,temp,sys_state,c_model,verbose=True):
		record = {
		  # 'model':c_model,
		  # 'timestamp':dt,
		  'temperature':temp,
		  'cooling':sys_state['cooling']>0,
		  'heating':sys_state['number_heater']>0
		}
		self.model = c_model
		self.log[dt] = record
		if verbose:
			print record

	def add_error_point(self,orientation,shift,ts,p):
		self.error[orientation][shift]['_points'].append(p)
		self.error[orientation]['_points'].append(p)

	def _calc_percent_within_ideal(self):
		self.percent_within_ideal = (float(self._points_within_ideal)/float(self._entries_count))*100.0

	def _set_error_absolute_values(self):
		bellow = self.error['bellow']
		above = self.error['above']
		self.error['absolute']['day']['_points'] = bellow['day']['_points'] + above['day']['_points']
		self.error['absolute']['night']['_points'] = bellow['night']['_points'] + above['night']['_points']
		self.error['absolute']['_points'] = bellow['_points'] + above['_points']

	def _calc_error_maxs(self):
		self.error['bellow']['day']['max'] = max(self.error['bellow']['day']['_points'])
		self.error['bellow']['night']['max'] = max(self.error['bellow']['night']['_points'])
		self.error['bellow']['max'] = max(self.error['bellow']['_points'])
		self.error['above']['day']['max'] = max(self.error['above']['day']['_points'])
		self.error['above']['night']['max'] = max(self.error['above']['night']['_points'])
		self.error['above']['max'] = max(self.error['above']['_points'])
		self.error['absolute']['day']['max'] = max(self.error['absolute']['day']['_points'])
		self.error['absolute']['night']['max'] = max(self.error['absolute']['night']['_points'])
		self.error['absolute']['max'] = max(self.error['absolute']['_points'])

	def _calc_error_avgs(self):
		self.error['bellow']['day']['avg'] = np.mean(self.error['bellow']['day']['_points'])
		self.error['bellow']['night']['avg'] = np.mean(self.error['bellow']['night']['_points'])
		self.error['bellow']['avg'] = np.mean(self.error['bellow']['_points'])
		self.error['above']['day']['avg'] = np.mean(self.error['above']['day']['_points'])
		self.error['above']['night']['avg'] = np.mean(self.error['above']['night']['_points'])
		self.error['above']['avg'] = np.mean(self.error['above']['_points'])
		self.error['absolute']['day']['avg'] = np.mean(self.error['absolute']['day']['_points'])
		self.error['absolute']['night']['avg'] = np.mean(self.error['absolute']['night']['_points'])
		self.error['absolute']['avg'] = np.mean(self.error['absolute']['_points'])

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