import paho.mqtt.client as mqtt

#Client created with cntr
client = mqtt.Client()
#Broker Connection with port and address
client.username_pw_set("dyyphfkl","UCwekHlkR7Fp")
client.connect("m16.cloudmqtt.com", port = 11266, keepalive = 60)

payload = "Hello From JN"
topic_name = "/cdac/acts/desd"
#Publish
#client.publish(topic_name,payload=payload,qos)
#client.disconnect()
client.publish(topic_name, payload=payload,qos=1,retain=False)
#client.loop_forever()