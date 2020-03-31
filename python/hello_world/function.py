"""
Doc string my first python application
"""
#non parameterised function
def hello_world():
    print("Hello World")

#parameterised function
def hello_world(a,b= 10):
    print("Hello World")
    print(a, b)

#variable args to a parameters
def hello_world1(*a):
    print(a)





hello_world()
hello_world(a=10, b=12)
