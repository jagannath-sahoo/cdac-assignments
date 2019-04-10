#Tuple is a sequence of immutable objects

tup = ("a",1,2,True)
#Empty tuple
tup1 = ()
tup3 = tup + tup1
for x in tup:
    print x

del tup3

