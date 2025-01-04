
"""
n = int(input("Enter the Number : "))
sum = 0
t = n

while(n!=0):
   sum += n % 10  
   n = n // 10
   
print(f"Sum of {t} this Digit is :",sum)   

"""
"""
n = int(input("Enter the Number : "))
fac = 1
i = 1
while i<=n:
    fac *= i
    i += 1
    
print(f"Factorial of {n} this Number is :",fac)    
"""

"""
str = input("Enter the String : ")
print("Original String is : ",str)
print("Reverse String is : ",str[::-1])
for i in range(len(str)-1,-1,-1):
    print(str[i],end="")
"""

"""
n = int(input("Enter How Many Tuple Elements You Want :"))
tuple = ()

for i in range(n):
    tuple += (int(input("")),)
print("Original Tuple Elements is \n ",tuple)    


for i in range(n):
    if(i<n/2):
        print(tuple[i],end=" ")
    else:
        print(tuple[i],end=" ")  
"""        

"""
str = input("Enter the String : ")  
count = 0

for i in range(len(str)):
    if(str[i]!=" "):
        count += 1
print("Total no of Character is :",count) 
"""   

"""
n = int(input("Enter the Number : "))
l = list()

for i in range(n):
    no = int(input("Enter Element : "))
    l.append(no)
print(l)  

print("Maximum Element in List is :",max(l))
print("Minimum Element in List is :",min(l))

max1 = l[0]
min1 = l[0]

for i in range(1,n):
    if(max1<l[i]):
        max1 = l[i]
    if(min1>l[i]):
        min1 = l[i] 
    
        
print("Maximum Element in List is :",max1)
print("Minimum Element in List is :",min1)
"""

"""  
n = int(input("Enter Size of Tuple : "))
t = ()

for i in range(n):
    t += (int(input("Enter the Number :")),)
    
print("Tuple Elements is : \n",t)   

found = int(input("Enter Number You Want Found :"))
f = 0

for i in range(n):
    if(found==t[i]):
        f += 1
if(f>0):
    print(f"{found} this Number is Found in Tuple") 
else:
    print(f"{found} this Number is Not Found in Tuple")          
"""   

"""
def rev(str):
    if(len(str)<=1):
        return str
    else:
        return str[::-1]

str = input("Enter String : ")
print("Reverse String is :",rev(str))            
"""

"""
def Circle(r):
    return lambda : 3.14 * r ** 2, lambda : 2 * 3.14 * r

radius = float(input("Enter the Radius : "))
area,circumference = Circle(radius)
print("Area of Circle is : ",area())
print("Circumference of Circle is : ",round(circumference(),2))
"""  

"""
n = int(input("Enter How Many Numbers You Want : ")) 
s = []

for i in range(n):
    n1 = int(input(f"Enter Number {i+1} : "))
    s.append(n1)
    
print("You Enter Numbers Are :\n",s)  
even = 0
odd = 0
for i in range(n):
    if(s[i]%2==0):
        even += s[i]
    else:
        odd += s[i]  
        
print("Sum of Even Numbers is :",even)     
print("Sum of Odd Numbers is :",odd)  
"""