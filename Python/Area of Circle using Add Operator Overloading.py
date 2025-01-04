import math

class Circle:
    
    def __init__(self,radius):
        self.radius = radius
        
    def __add__(self,other):
        return self.radius + other.radius
    
    def Display(self):
        return math.pi * self.radius ** 2
        
        
r1 = int(input("Enter First Circle Radius : "))  
c1 = Circle(r1)
print("\nArea of First Circle is : ",round(c1.Display(),2))
  

r2 = int(input("\nEnter Second Circle Radius : "))  
c2 = Circle(r2) 
print("Area of Second Circle is : ",round(c2.Display(),3))   

t = c1 + c2
c3 = Circle(t)
print("\nAddition Of Two Radius is : ",t) 
print("\nAddition Radius Area is :",round(c3.Display(),3))