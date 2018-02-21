#!/usr/bin/python

import importlib
import time
import os
import re
import sys
import pltfm_pm_rpc
import pltfm_mgr_rpc
#from pltfm_pm_rpc.ttypes import *
from pltfm_mgr_rpc.ttypes import *

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

def pltfm_mgr_ps_info_get(ps_num):
    global pltfm_mgr

    ps_info = pltfm_mgr.pltfm_mgr_pwr_supply_info_get(ps_num)
    print "PS Model: %s" % ps_info.model
    print "PS Serial #: %s" % ps_info.serial
    print "PS revision: %s" % ps_info.rev

def thriftTeardown():
    global transport
    transport.close()


thriftSetup()
ps_num = int(sys.argv[1])
pltfm_mgr_ps_info_get(ps_num)
thriftTeardown()
