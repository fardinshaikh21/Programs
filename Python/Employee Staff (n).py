
class Employee:
    
     def __init__(self,name,address):
         self.name = name
         self.address = address
         
     def Display(self):
         print("Employee Name is : ",self.name) 
         print("Employee Address is : ",self.address)

class Staff(Employee):
    
    def __init__(self,name, address,staffid,salary):
        super().__init__(name,address)
        self.staffid = staffid 
        self.salary = salary
        
    def Display(self):
        super().Display()  
        print("Staff Id is : ",self.staffid)
        print("Staff Salary is : ",self.salary)
        
n = int(input("Enter How Many Employee Details You Want : "))  
L = []

print("\n\tEnter Employee Details \n")
for i in range(n):
    name = input("Enter Employee Name : ")
    address = input("Enter Employee Address : ") 
    staffid = int(input("Enter Staff id : "))   
    salary = float(input("Enter Employee Salary : "))
    print()
    s = Staff(name,address,staffid,salary)
    L.append(s)

print("\n\tEmployee Details are \n")
for i in range(n):
    L[i].Display()
    print()
              
               