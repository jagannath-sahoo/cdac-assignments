import paho.mqtt.client as mqtt
#import paho.mqtt.subscribe as subscribe

"""
Callback on Connect
"""
def onConnect(client,userdata,flags,rc):
    print (userdata)
    print ("Connected with Result code " + str(rc))
    topic_name_1 = "/cdac/acts/desd"
    topic_name_2 = "/cdac/acts/"
    client.subscribe(topic_name_2)
    client.subscribe(topic_name_1)

"""
Callback on Message
"""
def onMsg(client,userdata,msg):
    print("FROM TOPIC " + msg.topic + " => " + str(msg.payload))

def newMsg(client,userdata,msg):
    print "Received MSG " + str(msg.payload.decode())
    client.disconnect() 


def main():
    client = mqtt.Client()

    #Register Call Back functions
    topic_name_2 = "/cdac/acts/"
    client.on_connect = onConnect
    client.on_message = onMsg
    client.message_callback_add(topic_name_2,newMsg)

    #Connect BrokerTrue
    client.connect("localhost",port=1883, keepalive=60)

    #topic_name_2 = "/cdac/acts/"
    #client.subscribe(topic_name,qos=1)
    #client.message_callback_add(topic_name_2,newMsg)
    client.loop_forever()
    
  
  
if __name__== "__main__":
  main()




