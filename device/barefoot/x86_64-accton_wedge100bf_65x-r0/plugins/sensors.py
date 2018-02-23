#!/usr/bin/python

import importlib
import time
import os
import re
import subprocess
import pltfm_pm_rpc
import pltfm_mgr_rpc
import codecs
from pltfm_pm_rpc.ttypes import *
from pltfm_mgr_rpc.ttypes import *

from subprocess import *

from thrift.transport import TSocket
from thrift.transport import TTransport
from thrift.protocol import TBinaryProtocol
from thrift.protocol import TMultiplexedProtocol

from argparse import ArgumentParser

thrift_server = 'localhost'
transport = None
pltfm_mgr = None

def thriftSetup():
    global thrift_server, transport, pltfm_mgr
    transport = TSocket.TSocket(thrift_server, 9090)

    transport = TTransport.TBufferedTransport(transport)
    bprotocol = TBinaryProtocol.TBinaryProtocol(transport)

    pltfm_mgr_client_module = importlib.import_module(".".join(["pltfm_mgr_rpc", "pltfm_mgr_rpc"]))
    pltfm_mgr_protocol = TMultiplexedProtocol.TMultiplexedProtocol(bprotocol, "pltfm_mgr_rpc")
    pltfm_mgr = pltfm_mgr_client_module.Client(pltfm_mgr_protocol)

    transport.open()

def pltfm_mgr_sensor_get():
    global pltfm_mgr
    raw_out = pltfm_mgr.pltfm_mgr_sensor_info_get()
    raw_list = raw_out.split('\"')
    sensors_out = raw_list[1]
    sensors_out = codecs.decode(sensors_out, "unicode_escape")
    print sensors_out

def thriftTeardown():
    global transport
    transport.close()


thriftSetup()
pltfm_mgr_sensor_get()
data=subprocess.Popen("sensors", shell=True, stdout=PIPE).stdout.read()
print data
thriftTeardown()
