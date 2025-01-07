#!/usr/bin/python3

n = int(input("Enter the Number : "))
fac = 1

'''
i = 1
while(i<=n):
    fac *= i
    i += 1
print("Factorial of",n,"this Number is : ",fac) 
'''

for i in range(1,n+1):
    fac *= i
print("Factorial of",n,"this Number is :",fac)   