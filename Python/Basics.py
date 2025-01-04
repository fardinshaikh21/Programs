#!/usr/bin/python3




'''
list = ["Fardin","Aman","zain","afan","Numan"]

print("\tList Elements are : \n")
print(list)
print("\n\tSort Elements Assending Order\n")
list.sort()
print(list)
print("\nSort Elements Descending Order using reverse\n")
list.reverse()
print(list)
print("\n\tInsert New Element Saad \n")
list.append("Saad")
print(list)
print("\n\tRemove Element zain \n")
list.remove("zain")
print(list)
print("\n\tPop Element afan \n")
list.pop(0)
print(list)
print("\nDelete All Element using del function\n")
del(list)
print(list)
'''
"""
n = int(input("Enter the Number : "))
k = 1

for i in range(1,n+1):
    for j in range(1,i+1):
        print(k,end=" ")
        k+=1
    print("\n")     
"""    

"""
class Student:
  
  def Accept(self):
    self.rno = int(input("Enter Student Roll No : "))
    self.name = input("Enter Student Name : ")
    self.address= input("Enter Student Address : ")
  
  def Show(self):
    print("\n\nStudent Roll no is : ",self.rno)
    print("Student Name is : ",self.name)
    print("Student Address is : ",self.address)
  
s=Student()

for i in range(0,3):
  s.Accept()
  
for i in range(0,3):
  s.Show()
"""
def NumSum(n):
    t = n
    sum = 0
    while n > 0:
        sum += n % 10
        n = n // 10
    print(t,"this Number Total Sum is : ",sum) 
    

def Factorial(n):
   fac = 1 
   ''' i = 1 
    while i<=n:
        fac *= i
        i += 1
    print(n,"this  Number Factorial is : ",fac)'''
    
   for i in range(1,n+1):
        fac *= i
   print(n,"this  Number Factorial is : ",fac)    
     
def Factors(n):
   ''' i = 1
    while(i<=n):
        if(n%i==0):
            print(i)
        i += 1   ''' 
   
   for i in range(1,n+1):
       if(n%i==0):
         print(i)  
         
def Reverse(n):
    t = n
    rev = 0
    while(n>0):
      rev = rev * 10 + n % 10
      n = n // 10
    print(t,"Reverse Number is :",rev) 
    
def PrimeNumber(n):
    
    for i in range(2,n+1):
        for j in range(2,i+1):
            if(i%j==0):
                break
        if(i==j):
            print(i)       
 
def EvenOdd(n):
    if(n%2==0):
        print(n,"this Number is Even")
    else:
        print(n,"this Number is Odd")  
        
def Table(n):
   ''' for i in range(1,11):
        print(n,"*",i,"=",n*i)
    '''
    
   i = 1
   while(i<=10):
      print(n,"*",i,"=",n*i)
      i += 1
 
def Fibonacci(n):
    a = 0
    b = 1
    i = 1
    
    ''' for i in range(1,n+1):
        print(a)
        t = a + b # 0 + 1
        b = a     # 0
        a = t    # 1
    '''
    while i<=n:
      print(a)
      t = a + b
      a = b
      b = t
      i += 1
      
def Tribonacci(n):
    a = 0
    b = 1
    c = 2
    i = 1
    
    ''' for i in range(1,n+ 1):
        print(a)
        t = a + b + c
        a = b
        b = c 
        c = t
    '''
   
    while i<=n:
      print(a) 
      t = a + b + c
      a = b
      b = c 
      c = t
      i += 1

'''      
       
  def Calculator(a,b):
    
    # print("\nPress 0 Exit ")   
        print("\nPress 1 Addition ")   
        print("Press 2 Subtraction ")   
        print("Press 3 Multiplication ")  
        print("Press 4 Division ") 
        print("Press 5 Remainder ")   
    
        ch = int(input("\n\tEnter Your Choice : "))
    
        switch ch
        case 1 
        print("Addition is : ",a+b)
        break
        case 2 
        print("Subtraction is : ",a-b)
        break
        case 3  
        print("Multiplication is : ",a*b)
        break
        case 4  
        print("Division is : ",a/b)
        break
        case 5 
        print("Remainder is : ",a%b)
        break
        default
        print("Invalid Choice!")
'''
       
       

#n = int(input("Enter the Number : ")) 

#a = int(input("Enter First Number : ")) 
#b = int(input("Enter Second Number : ")) 

#NumSum(n)
#Factorial(n)
#Factors(n)
#Reverse(n)
#PrimeNumber(n)
#EvenOdd(n)
#Table(n)
#Fibonacci(n)
#Tribonacci(n)
#Calculator(a,b)

'''
str = input("Enter the String : ")
print("String is :",str)
print("String Length is :",len(str))
print("String Endswith : ",str.endswith("din"))
print("Count Given Character :",str.count("a"))
print("first word Capital given String :",str.capitalize())
print("Find Given Word in String & return Index :",str.find("din"))
print("Replace String :",str.replace("a","e",1))
print("start and end ",str[:6])
print("start to end : ",str[0:])
print("given gap in String : ",str[0::2])
'''
# List Methods 

'''
list = [9,4,1,10,8,2,5,7,3,0,6,]
print("This is List Elements : \n",list)
list.sort()
print("\nSort List Elements Assending Order :\n",list)  
list.reverse()
print("\nReverse order List : \n",list)
list.append(13)
print("\nInsert 13 in List of Last Index :\n",list)  
list.insert(0,14)
print("\nInsert 14 index of 0 : \n",list)
list.pop(0)
print("\nDelete Element of index 0 in list : \n",list)
list.remove(8)
print("\nRemove the Given Element : \n",list)
'''

'''
tuple = (12,83,28,1,3,0,6,0,0,0)
print("Count Total No of 0 in tuple :",tuple.count(0))
print("Return Given number Index :",tuple.index(6))
print("Return Tuple length :",len(tuple))
'''

# Recursion Programs

'''
def Fac(n): 
    
 if n<=1:
     return 1 
 else:
     n = n * Fac(n-1)
     return n  

print("Factorial is : ",Fac(5))

def Sum(n):
    if n<=0:
        return 0
    else:
        n = n + Sum(n-1) 
        return n

print("Total Number Sum is : ",Sum(10))  

'''

# Data Type 
'''
list = []
tuple = ("Fardin",3)
n = 3.2
a = 32
c = False
d = "Fardin"

print(type(list))
print(type(tuple))
print(type(n))
print(type(a))
print(type(c))
print(type(d))
print(type(e))
'''

"""
def Fibonacci(n):
    if(n==0):
        return 0
    elif(n==1):
        return 1
    else:
       return Fibonacci(n-1) + Fibonacci(n-2)   

print("Fibonacci Series : ",Fibonacci(4))   

"""
    