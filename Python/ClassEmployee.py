class Employee:
    
    def Accept(self):
        print()
        self.id = int(input("Enter Employee Id : "))
        self.name = input("Enter Employee Name : ")
        self.dep = input("Enter Employee Department : ")
        self.salary = float(input("Enter Employee Salary : "))
        
    def Display(self):
       print()
       print("Employee Id is : ",self.id)
       print("Employee Name is : ",self.name)
       print("Employee Department is : ",self.dep)
       print("Emplyee Salary is : ",self.salary)
       
class Manager(Employee):
    
     def Accept(self):
        super().Accept()
        self.bonus = float(input("Enter Employee Bonus : "))
        
     def Display(self):
        super().Display()
        print("Employee Bonus is : ",self.bonus)
        self.total = self.bonus + self.salary
        print("Employee Total Salary is : ",self.total)        
        
l = []
n = int(input("Enter How Many Employee Details You Want : "))

print("\n\tEnter Employee Details :")

for i in range(n):
   m = Manager()
   m.Accept()
   l.append(m)
   
print("\n\tEmployee Details are :\n")

for i in range(n):
    l[i].Display()
    
max = l[0].total  

for i in range(n):
    for j in range(1,n):       
        if(max<l[j].total):
            max = l[j].total
    
print("Maximum Salary is : ",max)  