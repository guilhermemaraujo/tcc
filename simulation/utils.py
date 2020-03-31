#!/usr/bin/env python
# -*- coding: utf-8 -*-

import pandas as pd
from datetime import datetime
import sys

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

