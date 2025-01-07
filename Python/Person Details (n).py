class Person:
    
    def __init__(self,name,address):
        self.name = name 
        self.address = address
        
    def Display(self):
        print("Person Name is : ",self.name) 
        print("Person Address is : ",self.address) 
        
class Employee(Person):
    
    def __init__(self,name,address,staff,salary):
        super().__init__(name,address)
        self.staff = staff
        self.salary = salary
        
    def Display(self):
        super().Display()   
        print("Employee Staffed is : ",self.staff)
        print("Employee Salary is : ",self.salary)
        
n = int(input("Enter How Many Person Details You Want : "))  
L = []

print("\n\tEnter Person Details : \n")
for i in range(n):
    name = input("Enter Person Name : ")
    address = input("Enter Person Address : ")
    staff = int(input("Enter no of Staffs : "))
    salary = int(input("Enter Employee Salary : "))
    print()
    e = Employee(name,address,staff,salary)
    L.append(e)

print("\n\tPerson Details Are : \n")
for i in range(n):
    L[i].Display()
    print()
    