class Person:
    #Constructor
    def __init__(self,name,age):
        self.name = name
        self.age = age


#Object
p1 = Person("JAGA",21)
print "Person name: {0} and age: {1}".format(p1.name,p1.age)


