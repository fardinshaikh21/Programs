import math
import math

class Circle:
    
    def __init__(self,radius):
        self.radius = radius
        
    def __sub__(self,other):
        return self.radius - other.radius
    
    def Display(self):
     return math.pi * self.radius ** 2 
     
c1 = Circle(5)   
c2 = Circle(4)  
print(f"Subtraction of First object Radius and Second object Radius is : ",c1-c2) 

print("Area of First Object is : ",c1.Display())
print("Area of Second Object is : ",c2.Display())
               
 