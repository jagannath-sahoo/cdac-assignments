#install phao-mqtt module
#pip install paho-mqtt
import paho.mqtt.client as mqtt
#constructor
client = mqtt.Client()
#connect to Broker
#brokeraddress,portnumber,keepaliveinterval
client.connect("localhost",1883,60)
payload = "Hello"
topic_name = "cdac/acts/pune" 
client.publish(topic_name,payload)
client.disconnect()
