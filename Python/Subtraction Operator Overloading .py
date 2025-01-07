import math
class Circle:
    
    def __init__(self,radius):
        self.radius = radius
        
    def __sub__(self,other):
        return self.radius - other.radius
        
    def Area(self):
        return math.pi * self.radius ** 2
          
        
c1 = Circle(6)
c2 = Circle(3)

sub = c1 - c2

c3 = Circle(sub)

print("Subtraction is : ",sub)
print("Area of First Object is : ",round(c1.Area(),3))
print("Area of Second Object is : ",round(c2.Area(),3))
print("Area of Second Object is : ",round(c3.Area(),3))
