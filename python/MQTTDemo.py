#!/usr/bin/python
#import os clear
#os.system("pwd")

import paho.mqtt.client as mqtt

#Client created with cntr
client = mqtt.Client()
#Broker Connection with port and address
client.connect("localhost", port = 1883, keepalive = 60)
payload = "Hello From Paho Mqtt"
topic_name = "/cdac/acts/desd"
#Publish
client.publish(topic_name,payload=payload)
client.disconnect()

