#!/usr/bin/env python
# -*- coding: utf-8 -*-

import socket
import numpy as np
from scipy.integrate import odeint
import matplotlib.pyplot as plt
import matplotlib.dates as md
from utils import get_data_from_csv
import pandas as pd
from simulator import temperature_model

def getConnection():
    host = '0.0.0.0';
    port = 8080;
    conn = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    conn.connect((host, port))
    return conn

def controlResponse(conn,_t_in):
    conn.send(_t_in)
    response = conn.recv(4096)
    response = response.strip(' \t\r\n\0')
    response = response.split(';')
    return {'cooling':int(response[0]), 'heating':int(response[1])}


conn = getConnection()
while True:
    _t_in = float(raw_input('t_in: '))
    time = int(raw_input('time: '))
    d = 0
    data = '%05.2f;%02d;%1d' % (_t_in,time,d)
    print data
    conn.send(data)
    print conn.recv(4096)
