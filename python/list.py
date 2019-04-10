#!/usr/bin/python
#
#list
"""
Allows multiple members
[] Square brakets
All kind of variables are allowed
Members can be added/deleted at any time
#hence mutable
"""
list = [1,"DESD","IoT",3.5, True, False]

##print list[-1]

"""
loops
"""
#For Looping
for x in list:
    print x

"""
Checking existing item in list
"""
if "DESD" in list:
    print "Yes True Exist"

#Print length of string
list.append("CDAC-ACTS Pune")
print "After Append"
for x in list:
    print x

print "Reversed List"
list.reverse()
print list