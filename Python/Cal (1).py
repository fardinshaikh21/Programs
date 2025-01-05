
class Calculator:
    
    def __init__(self,a,b):
        self.a = a
        self.b = b
        
    def Add(self):
        return self.a + self.b     
        
    def Sub(self):
        return self.a - self.b  
        
    def Mul(self):
        return self.a * self.b     
        
    def Div(self):
        return self.a // self.b  
        
    def Rem(self):
        return self.a % self.b   
        
        
m = int(input("Enter First Number : "))                
n = int(input("Enter Second Number : "))        

c = Calculator(m,n)

print(f"Addtion is : {m} + {n} =",c.Add())
print(f"Subtraction is : {m} - {n} =",c.Sub())
print(f"Multiplication is : {m} * {n} =",c.Mul())
print(f"Division is : {m} / {n} =",c.Div())
print(f"Remainder is : {m} % {n} =",c.Rem())


