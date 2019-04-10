#def function-name(arg1,arg2,...argn):
#    return

def add(a, b):
    return (a+b)

def sub(a,b):
    return (a-b)

print "Sum : " + str(add(10,20))
print "Sub : " + str(sub(10,20))

# Language more use of static variables is called functional programming
#language
#
#lamda Function
#var-name = lambda arguments: statement
#var-name(arguments)
x = lambda a : a + 10
print x(5)

result = lambda x,y : x * y
print "a * b =", result(4,4)

