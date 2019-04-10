import os

os.system("python --version")

print "Hello World in Python"

if 7>4:
    print "Seven is greater than four"


x = 7
y = "CDAC"
print(x)
print(y)

print type(x)

x = "Easy to learn"
print "Python is " + x

a = 10
b = 20
print a+b

x = 10;
y = 5.9;
z = 1j
print type(x)
print type(y)
print type(z)

#List

list = ["Banana","Apple","Cherry"]
print list[1]

for i in list:
    print i

list.insert(1,"Orange")

print "****After Insert****"
for i in list:
    print i

list.remove("Banana")

print "****After list.remove(\"Banana\")****"
for i in list:
    print i

print hex(id(list))