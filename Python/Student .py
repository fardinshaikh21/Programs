class Student:
    
    def Accept(self):
        print()
        self.rno = int(input("Enter Student Roll no : "))
        self.name = input("Enter Student Name : ")
        self.age = int(input("Enter Student Age : "))
        self.gender = input("Enter Student Gender : ")
        
    def Display(self):
       print()
       print("Student Roll no is : ",self.rno)
       print("Student Name is : ",self.name)
       print("Student Age is : ",self.age)
       print("Student Gender is : ",self.gender)       
        
class Test(Student):
    
    def Accept(self):
        super().Accept()
        self.m1 = float(input("Enter First Subject Marks : "))
        self.m2 = float(input("Enter Second Subject Marks : "))
        self.m3 = float(input("Enter Third Subject Marks : "))
        
    def Display(self):
        super().Display()
        print("Student Subject1 Marks is : ",self.m1)
        print("Student Subject2 Marks is : ",self.m2)
        print("Student Subject3 Marks is : ",self.m3)
        self.total = self.m1+self.m2+self.m3
        print("Student Subject Total Marks is ",self.total)
        
        
#t = Test()
#t.Accept()
#t.Display()

n = int(input("Enter How Many Student Details : "))
l = []

print("\n\tEnter Students Details : ")

for i in range(n):
    t = Test()
    t.Accept()
    l.append(t)
        
print("\n\tStudent Details are : ")

for i in range(n):
    l[i].Display()