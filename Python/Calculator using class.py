#!/usr/bin/python3

class Calculator:
    def Accept(self,a,b):
        self.a = a
        self.b = b
        
    def Display(self):
        print(f"Addition is : {self.a} + {self.b} = ",self.a+self.b) 
        print(f"Subtraction is : {self.a} - {self.b} = ",self.a-self.b) 
        print(f"Multiplication is : {self.a} * {self.b} = ",self.a*self.b) 
        print(f"Division is : {self.a} / {self.b} = ",self.a/self.b) 
        print(f"Remainder is : {self.a} % {self.b} = ",self.a%self.b) 
        

m = int(input("Enter First Number : "))
n = int(input("Enter Second Number : "))

c = Calculator() 
c.Accept(m,n)
c.Display()