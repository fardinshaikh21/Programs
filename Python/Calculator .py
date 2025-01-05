def Dis():
    print("I am Fardin")

def Add(m,n):
    return m+n
    
def Sub(m,n):
    return m-n
    
def Mul(m,n):
    return m*n
    
def Div(m,n):
    return m//n 
    
def Rem(m,n):
    return m%n     
    
a = int(input("Enter First Number : "))
b = int(input("Enter Second Number : "))


print("Addition is : ",Add(a,b))
print("Subtraction is : ",Sub(a,b))
print("Multiplication is : ",Mul(a,b))
print("Division is : ",Div(a,b))
print("Remainder is : ",Rem(a,b))
