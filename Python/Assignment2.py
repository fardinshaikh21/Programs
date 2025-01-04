"""
str = input("Enter the String : ")
d = {}
value = 0
for i in range(len(str)):
    key = str[i]
    if key in d:
        d[key] += 1
    else:
        d[key] = 1
    
print(d)
"""
'''
n = int(input("Enter the Number : "))
fac = 1
i = 1

while(i<=n):
    fac *= i
    i += 1
    
print(f"Factorial of {n} This Number is :",fac)
'''

"""
n = int(input("Enter the Number : "))

print(f"{n} this Number Factors is :")
for i in range(1,n):
    if(n%i==0):
        print(i)
"""  

"""
n = int(input("Enter the Number : "))  
j = 1
for i in range(1,n+1):
    for j in range(2,i+1):
        if(i%j==0):
            break
    if(i==j):
        print(i)  
""" 

'''
str1 = input("Enter First String : ")  
str2 = input("Enter Second String : ")  

str3 = ( str2[:2] + str1[2:] ) + ( str1[:2] + str2[2:])
#str4 =  str1[:2] + str2[2:]
print(str3)

''' 

"""
n = int(input("Enter the Number : "))
l = []
s = set()

for i in range(n):
   # l += (int(input("Enter Number : ")),)
   n1 = int(input("Enter the Number : "))
   l.append(n1)
   s.add(l[i])
print("List Elements Are : \n",l)
print("Set Elements :\n",s)
"""   

"""
n = int(input("Enter the Number : "))
for i in range(1,11):
    print(f"{n} * {i} = ",n*i)
""" 
'''
class Calculator:
    
    def Accept(self):
        self.a = int(input("Enter First Number : "))
        self.b = int(input("Enter Second Number : "))
        
    def Display(self):
        print(f"Addition is : {self.a} + {self.b} = ",self.a+self.b)    
        print(f"Subtraction is : {self.a} - {self.b} = ",self.a-self.b)    
        print(f"Multiplication is : {self.a} * {self.b} = ",self.a*self.b)    
        print(f"Division is : {self.a} / {self.b} = ",self.a//self.b)    
        print(f"Remainder is : {self.a} % {self.b} = ",self.a%self.b)    
        
c = Calculator()
c.Accept()  
c.Display() 

'''