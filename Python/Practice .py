"""
class InvalidDate(Exception):
    pass
    
class Date:
    
   def Accept(self):
       try:
          self.date = int(input("Enter Date : "))       
          self.month = int(input("Enter Month : "))       
          self.year = int(input("Enter Year : "))   
          self.Operation()          
       except ValueError:
          # print("Invalid Date Plz Check it") 
          raise InvalidDate("Invalid Date")
          
   def Operation(self):
       
        if(self.month < 1 or self.month > 12):
            raise InvalidDate("Invalid Date")
        elif(self.date < 1):
            raise InvalidDate("Invalid Date")
        elif (self.month in [1,3,5,7,8,10,12] and self.date > 31):
            raise InvalidDate("Invalid Date")
        elif (self.month in [4,6,9,11] and self.date > 30):
            raise InvalidDate("Invalid Date")
        elif(self.month == 2):
            if(self.year%4==0):
                max = 29
            else:
                max = 28
                
            if(self.date > max):
                 raise InvalidDate("Invalid Date")               
   
   def Display(self):
          print(f"{self.date}/{self.month}/{self.year}")       
  
d = Date()

try:
  d.Accept()
  d.Display()
except Exception as e:
   print(e)    
   
"""   
"""
n = int(input("Enter How Many Numbers You Want : "))
l = []

for i in range(n):
    num = int(input(f"Enter {i+1} Number : "))
    l.append(num)    
print(l)  

Min = l[0]
Max = l[0]

for i in range(1,n):
    if(Min > l[i]):
        Min = l[i]
    if(Max < l[i]):
        Max = l[i]   
        
print("Minimum Number is : ",Min) 
print("Miximum Number is : ",Max)  
print("Minimum Number is : ",min(l)) 
print("Miximum Number is : ",max(l)) 

"""
"""
import math

class Circle:
    
     def __init__(self,radius):
         self.radius = radius
         
     def __sub__(self,other):
         return self.radius - other.radius
         
     def Area(self):
         return math.pi * self.radius ** 2
         
         
r1 = int(input("Enter Circle1 Radius : "))
r2 = int(input("Enter Circle2 Radius : "))

c1 = Circle(r1)  
c2 = Circle(r2)

print("Subtraction of Two Radius is : ",c1-c2)
print("Area of Circle1 is : ",round(c1.Area(),2))
print("Area of Circle2 is : ",round(c2.Area(),3))
"""

"""
import math

class Circle:
    
     def __init__(self,radius):
         self.radius = radius
         
     def __add__(self,other):
         return self.radius + other.radius
         
     def Area(self):
         return math.pi * self.radius ** 2
         
         
r1 = int(input("Enter Circle1 Radius : "))
r2 = int(input("Enter Circle2 Radius : "))

c1 = Circle(r1)  
c2 = Circle(r2)
add = c1 + c2
c3 = Circle(add)
print("Addition of Two Radius is : ",add)
print("Area of Two Circle is : ",round(c3.Area(),2))
print("Area of Circle1 is : ",round(c1.Area(),2))
print("Area of Circle2 is : ",round(c2.Area(),3))

"""

"""
class Cal:
    
    def __init__(self,a,b):
        self.a = a 
        self.b = b
        
    def Add(self):
        return self.a + self.b
    
    def Sub(self):
        return self.a - self.b

    def Mul(self):
        return self.a * self.b

    def Div(self):
        return self.a // self.b
        
    def Rem(self):
        return self.a % self.b        
        
a = int(input("Enter First Number : "))       
b = int(input("Enter Second Number : "))     

c = Cal(a,b)

print(f"Adition {a} + {b} is : ",c.Add())
print(f"Subtraction {a} - {b} is : ",c.Sub())
print(f"Multiplication {a} * {b} is : ",c.Mul())
print(f"Division {a} / {b} is : ",c.Div())
print(f"Remainder {a} % {b} is : ",c.Rem())

"""

"""
class Person:
    
    def __init__(self,name,age):
        self.name = name
        self.age = age
        
    def __lt__(self,other):
        return self.age < other.age
        
name1 = input("Enter First Person Name : ")
age1 = int(input("Enter First Person Age : "))
        
name2 = input("Enter Second Person Name : ")
age2 = int(input("Enter Second Person Age : "))

p1 = Person(name1,age1)        
p2 = Person(name2,age2)         

if(p1 < p2):
    print("Person1 is Less than Person2")
elif(p2 < p1):
    print("Person2 is Less than Person1")   
elif(p1 == p2):
    print("Both Person1 and Person2 is Equal")
    
"""  

"""
class Student:
    
    def __init__(self,name,age):
        self.name = name
        self.age = age
        
    def __gt__(self,other):
        return self.age > other.age
        
name1 = input("Enter First Student Name : ")
age1 = int(input("Enter First Student Age : "))
        
name2 = input("Enter Second Student Name : ")
age2 = int(input("Enter Second Student Age : "))

s1 = Student(name1,age1)        
s2 = Student(name2,age2)         

if(s1 > s2):
    print("Student1 is Greater than Student2")
elif(s2 > s1):
    print("Student2 is Greater than Student1")   
elif(s1 == s2):
    print("Both Student1 and Student2 is Equal")
    
"""  

"""
#f1 = open("example.txt","x")
#f1.close()

#with open("example.txt","w") as f:
  #  f.write("I am Fardin Shaikh. I am From Pune. I am Good Boy.")    
    
with open("example.txt","r") as f:    
    search = input("Enter Word You Want Search : ") 
    
    content = f.read()
    word = content.split()
    count = 0
    for i in word:
        if search == i:
            count += 1
    print(f"{search} this Word is Total Present {count} Times")        
    
""" 

"""
import math

class Shape:
    
    def Area(self):
        pass
        
    def Volume(self):
        pass
        
class Square(Shape):
    
    def __init__(self,Length):
         self.Length = Length
         
    def Area(self):
        return self.Length ** 2
        
    def Volume(self):
        return self.Length ** 2 * self.Length
        
class Circle(Shape):
    
    def __init__(self,radius):
        self.radius = radius
        
    def Area(self):
        return math.pi * self.radius ** 2
        
    def Volume(self):
        return (4 * math.pi * self.radius ** 2 * self.radius) / 3 
        
l = int(input("Enter Square Length : "))
s = Square(l)        
print("Area of Square is : ",s.Area())
print("Volume of Square is : ",s.Volume())
print()
r = int(input("Enter Circle Radius : "))
c = Circle(r)  
print("Area of Circle is : ",round(c.Area(),2))
print("Volume of Circle is : ",round(c.Volume(),3))

"""

"""
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
print("Area of Circle is : ",round(c.Area(),2))
print("Circumference of Circle is : ",round(c.Circumference(),3))

"""

"""
def Count(str):
     search = input("Enter Character You Want Search : ")
     count = 0
     for i in str:
        if(i == search):
            count += 1
     print(f"{str} This Character is Present {count} Times")  
     
str = input("Enter the String : ")
Count(str)

"""
"""

def Count(str):
    d ={}
    
    for i in str:        
        key = i       
        if key in d:
            d[key] += 1
        else:
            d[key] = 1 
    print(d)        
            
str = input("Enter the String : ")
Count(str)

"""
"""
n = int(input("Enter How Many Tuple Elements You Want : "))
t = ()

Sum = 0

for i in range(n):
   # num = int(input(f"Enter {i+1} Number : ")),
   # t += num 
   t += int(input(f"Enter {i+1} Number : ")),    
   Sum += t[i]   
print(t) 

Min = t[0]
Max = t[0]

for i in range(1,n):
    if Min > t[i]:
        Min = t[i]
        
    if Max < t[i]:
       Max = t[i]
       
print("Minimum Number is : ",Min)
print("Maximum Number is : ",Max)
print("Total Sum is : ",Sum)
"""

import math

def Shape():   
    area = lambda r : math.pi * r ** 2 
    volume = lambda r : 4 * math.pi * r * r * r / 3 
    circumference = lambda r : 2 * math.pi * r    
    return area,volume,circumference
    
a,v,c = Shape() 
print("Area of Circle is : ",round(a(5),2))
print("Volume of Circle is : ",round(v(5),3))
print("Circumference of Circle is : ",round(c(5),3))

"""
def Shape():
    
   return  lambda r : math.pi * r ** 2,lambda r : 4 * math.pi * r * r * r / 3,lambda r : 2 * math.pi * r 

area,volume,circumference = Shape()      
      
print("Area of Circle is : ",round(area(5),2))              
print("Volume of Circle is : ",round(volume(5),3))           
print("Circumference of Circle is : ",round(circumference(5),2))        
"""       
        