#!/usr/bin/python3
    
'''
Area = lambda r : 3.14 * r * r
#Circumference = lambda pi : 2 * pi * r

r = int(input("Enter Circle Radius : ")) 
#pi = 3.14

print("Area of Circle is : ",Area(r))
#print("Circumference of Circle is : ",Circumference)
'''
def Circle(r):
    return lambda pi : pi * r * r , lambda pi : 2 * pi * r
    
r = int(input("Enter Circle Radius : ")) 

Area,Circumference = Circle(r)

print("Area of Circle is : ",Area(3.14))
print("Circumference of Circle is : ",Circumference(3.14))

""" 
def Circle(r):
    return lambda : 3.14 * r * r , lambda : 2 * 3.14 * r
    
r = int(input("Enter Circle Radius : ")) 

Area,Circumference = Circle(r)

print("Area of Circle is : ",Area())
print("Circumference of Circle is : ",Circumference())
"""     