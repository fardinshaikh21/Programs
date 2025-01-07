#!/usr/bin/python3

n = int(input("Enter Any Number : "))

'''fac = 1

for i in range(1,n+1):
 fac *= i
 
print("\n",n,"this Number Factorial is : ",fac)
'''

'''fac = 1

while n != 0:
 fac *= n
 n -= 1
 
print("\nGiven Number Factorial is : ",fac)
'''

fac = 1
i = 1

while i <= n:
 fac *= i
 i += 1
 
print("\nGiven Number Factorial is : ",fac)
