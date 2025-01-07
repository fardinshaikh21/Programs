#!/usr/bin/python3

class Employee:
    
    def Accept(self):
        self.id = int(input("Enter Employee Id : "))
        self.name = input("Enter Employee Name : ")
        self.department = input("Enter Employee Department : ")
        self.salary = int(input("Enter Employee Salary : "))
        
    def Display(self):
        print("Employee Id is : ",self.id)
        print("Employee Name is : ",self.name)
        print("Employee Department is : ",self.department)  
        print("Employee Salary is : ",self.salary) 
 
class Manager(Employee):
    
    def Accept(self):
        super().Accept()
        self.bonus = int(input("Enter Employee Bonus : "))
     
    def Display(self):
        super().Display() 
        print("Employee Bonus is : ",self.bonus)
        print("Employee Total Salary is : ",self.salary + self.bonus) 
        
n = int(input("Enter How Many Employee Details You Want : "))
L = []

print("\n*********************************************")
print("\n\tEnter Employee Details : ")
print("\n*********************************************")

for i in range(n):
    m = Manager()
    print(f"\n\tEnter {i+1} Employee Details\n ")
    m.Accept()
    L.append(m)
    
print("\n*********************************************")
print("\n\tEmployee Details are: ")
print("\n*********************************************")
for i in range(n):
    print(f"\n\t{i+1} Employee Details\n")
    print("--------------------------------------------")
    L[i].Display()
    print("--------------------------------------------")


    