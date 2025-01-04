import math

class Shape:

   def Area(self):
      pass
      
   def Volume(self):
       pass 
       
class Square(Shape):
    
    def __init__(self,length):
        self.length = length
        
    def Area(self):
        return self.length  ** 2
    
    def Volume(self):
        return self.length ** 2 * self.length
    
class Circle(Shape):
    
    def __init__(self,radius):
        self.radius = radius
        
    def Area(self):
       # return 3.14 * self.radius ** 2
        return  math.pi * self.radius ** 2
        
    def Volume(self):
        return (4 * 3.14 * self.radius ** 2 * self.radius) / 3
        

length = int(input("Enter The Square Length : "))
s = Square(length)

print("Area of Square is : ",s.Area())
print("Volume of Square is : ",s.Volume())


radius = int(input("\nEnter the Circle Radius : "))
c = Circle(radius)

print("Area of Circle is : ",round(c.Area(),2))
print("Volume of Circle is : ",round(c.Volume(),2))