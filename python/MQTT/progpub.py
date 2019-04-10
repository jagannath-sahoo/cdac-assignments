import paho.mqtt.client as mqtt

client=mqtt.Client()
client.connect("localhost",port=1883,keepalive=60)
payload="hii from iottt"
topic_name="cdac/acts/pune"
client.publish(topic_name,payload,qos=1)
