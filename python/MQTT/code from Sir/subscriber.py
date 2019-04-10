#Subscriber
import paho.mqtt.client as mqtt
#connect callback
#method will be called when client(subsriber) will try to 
#connect with broker
def on_connect(client, userdata,flags,rc):
    print("connected with result code", str(rc))
    topic_name = "cdac/acts/pune"
    topic1 = "cdac/acts/acpm"
    client.subscribe(topic_name)
    client.subscribe(topic1)
#On-Message Callback - called when specific msg. comes

def on_message(client,userdata,msg):
    if msg.payload.decode() == "Hello":
        print("Received %s" %(msg.payload.decode()))
        client.disconnect()

def newmsg(client,userdata,msg):
    print("received msg %s" %(msg.payload.decode()))
    #client.disconnect()
#constructor

client = mqtt.Client()
broker_address = "localhost"
port = 1883
keep_alive = 60
client.connect(broker_address,port,keep_alive)
#Register call back
client.on_connect = on_connect
client.on_message = on_message
topic1 = "cdac/acts/acpm"
#Add new callback
client.message_callback_add(topic1, newmsg)
client.loop_forever()
