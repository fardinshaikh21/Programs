class Student():
    def __init__(self):
        pass
    def GetStudent(self):
        self.Name=input("Enter Student Name:")
        self.RollNo=int(input("Enter Student Roll No:"))
        self.Age=int(input("Enter Student Age:"))
        self.Gender=input("Enter Student Gender:")
    def PutStudent(self):
        print("Student Name:",self.Name)
        print("Student Roll No:",self.RollNo)
        print("Student Age:",self.Age)
        print("Student Gender:",self.Gender)

class Test(Student):
    def __init__(self):
        pass
        Student.__init__(self)
    def GetMarks(self):
        self.MarkPy=int(input("Enter Marks of Python Subject:"))
        self.MarkJava=int(input("Enter Marks of Java Subject:"))
        self.MarkGO=int(input("Enter Marks of GO Subject:"))
    def PutMarks(self): 
        print("Python Marks:",self.MarkPy)
        print("Java Marks:",self.MarkPy)
        print("GO Marks:",self.MarkPy)
        print("Total Marks:",self.MarkPy+self.MarkJava+self.MarkGO)

n=int(input("Enter Number of Students:"))
lst=[]
for i in range(n):
    print("\nEnter Details of Student",i+1)
    obj="Student{i}"
    lst.append(obj)
    lst[i]=Test()
    lst[i].GetStudent()
    lst[i].GetMarks()
for i in range(n):
    print("\nDisplay detail of Student",i+1)
    lst[i].PutStudent()
    lst[i].PutMarks()