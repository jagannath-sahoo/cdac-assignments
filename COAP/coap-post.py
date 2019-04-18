#!/usr/bin/python

import os
import time

print "Posting data to COAP"

os.system('cat data2.json | coap post coap://localhost/api/v1/D19PRTZHtctU7zFzHgSL/attributes')
time.sleep(5)

print "Data Posted ^_^ Ya!"

