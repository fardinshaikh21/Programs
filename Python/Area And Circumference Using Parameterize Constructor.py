import math

class Circle:
    
    def __init__(self,radius):
        self.radius = radius
   
    def Area(self):
        return math.pi * self.radius ** 2
    
    def Circumference(self):
        return 2 * math.pi * self.radius

r = int(input("Enter Circle Radius : "))  
c = Circle(r)  
print("Area of Circle is :",round(c.Area(),2))
print("Circumference of Circle is :",round(c.Circumference(),2))
