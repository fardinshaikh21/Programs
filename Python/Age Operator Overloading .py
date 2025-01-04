class Student:
    
    def __init__(self,name,age):
        self.name = name
        self.age = age
        
    def __gt__(self,other):
         return self.age > other.age
                 
s1 = Student("Akash",22)
s2 = Student("Fardin",23)

if(s1>s2):
    print("Student1 Age is Greater than Student2")
elif(s2>s1):
    print("Student2 Age is Greater than Student1")
else:
    print("Both Students Age is Equal ")