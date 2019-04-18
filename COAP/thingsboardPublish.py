import paho.mqtt.client as mqtt
import json
import time
import random

topic_name_1 = 'v1/devices/me/attributes'
sensor_data = {'temperature': 0, 'humidity': 0}
ACCESS_TOKEN = 'D19PRTZHtctU7zFzHgSL'
THINGSBOARD_HOST = '192.168.75.137'

temperature = 0
humidity = 0
#msg_json = json.load(msg)

#Create Client Constructor
client = mqtt.Client()

#set access token
client.username_pw_set(ACCESS_TOKEN)
#Connect with server
sensor_data['temperature'] = 100
sensor_data['humidity'] = 200
print json.dumps(sensor_data)
client.connect(THINGSBOARD_HOST,1883,60)
print "Connection"
client.loop_start()
#client.publish(topic_name_1, json.dumps(sensor_data), qos=1, retain=False)

try:
    while True:
        temperature = random.randint(1,21)*5
        humidity =  random.randint(1,21)*5
        sensor_data['temperature'] = temperature
        sensor_data['humidity'] = humidity
        time.sleep(5)
        client.publish('v1/devices/me/attributes', json.dumps(sensor_data), 1)
        print "Publish" + json.dumps(sensor_data)
except KeyboardInterrupt as identifier:
    print "Keyboard CTRL + C"

#Client loop
client.loop_start()
#client.loop_forever()
client.disconnect()