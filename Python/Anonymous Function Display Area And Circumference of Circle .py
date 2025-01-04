import math


def Circle(self):
    return lambda r : math.pi * r ** 2 ,lambda r : 2 * math.pi * r
        
Area , Circumference = Circle(5)

print("Area of Circle is : ",round(Area(5),2))
print("Circumference of Circle is : ",round(Circumference(5),3))


def Circle(self,radius):   
    return lambda : math.pi * self.radius ** 2, lambda : 2 * math.pi * self.radius
        
'''     
r = int(input("Enter Circle Radius : "))               
Area,Circumference = Circle()
print("Area of Circle is : ",Area())
print("Circumference of Circle is : ",Circumference())
'''