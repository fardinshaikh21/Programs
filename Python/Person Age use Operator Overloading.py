#!/usr/bin/python3

class Person:
    
    def __init__(self,name,age):
        self.name = name
        self.age = age
      
    def __lt__(self,other):
        if(self.age<other.age):
            return True
        else:
            return False    
            
n1 = input("Enter First Person Name : ") 
a1 = int(input("Enter First Person Age : "))
p1 = Person(n1,a1)  
            
n2 = input("\nEnter Second Person Name : ") 
a2 = int(input("Enter Second Person Age : "))
p2 = Person(n2,a2)  


if(p1<p2):
    print(f"\n{p1.name} Age is Less Than {p2.name}")       
elif(p2<p1):
    print(f"\n{p2.name} Age is Less Than {p1.name}")       
else:
   print(f"\n{p1.name} and {p2.name} Both Person Age is Equal ")       