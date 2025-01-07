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
        self.total = self.salary + self.bonus
        print("Employee Total Salary is : ",self.total) 
        
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

max1 = L[0].total

for i in range(0,n):
    for j in range(1,n):
        if(max1 < L[j].total):
            max1,eid,ename,dep,sal,bon = L[j].total,L[j].id,L[j].name,L[j].department,L[j].salary,L[j].bonus

print("\n\tEmployee Maximum Salary Details is :\n")
print("Employee Id is : ",eid) 
print("Employee Name is : ",ename)
print("Employee Department Name is : ",dep)
print("Employee Salary is : ",sal)
print("Employee Bonus is : ",bon)
print("Employee Total Salary is : ",max1)           
    