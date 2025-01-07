
class Student:
    
    def __init__(self,name,age):
        self.name = name
        self.age = age
        
    def __gt__(self,other):
        return self.age > other.age
        
    def Display(self,other):
        
        if(self>other):
            print(f"\n{self.name} Age is Greater than {other.name}")
        elif(other>self):
            print(f"\n{other.name} Age is Greater than {self.name}")
        else:
            print(f"\n{self.name} and {other.name} Both Student Age is Equal")
 
n1 = input("Enter First Student Name : ") 
a1 = int(input("Enter First Student Age : "))
s1 = Student(n1,a1) 

n2 = input("\n\nEnter Second Student Name : ") 
a2 = int(input("Enter Second Student Age : "))
s2 = Student(n2,a2)

s1.Display(s2)