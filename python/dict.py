#Dictionary
#{}
#Keys are unique
#Create a Blank Dictionary
dict = {}
studentDetails = {'name':"Jagannath",
                'age': 21,
                'marks': 95}

#print "TYPE: " + str(type(studentDetails))
print "Name: " + studentDetails.get('name')

for x in studentDetails.values():
    print x

print "Len: " + str(len(studentDetails))

studentDetails['age'] = 22
studentDetails['couse'] = "DESD"

print "*****After******"
for x in studentDetails.values():
    print x

print studentDetails

