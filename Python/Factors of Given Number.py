#!/usr/bin/python3

n = int(input("Enter Any Number : "))

'''for i in range(1,n+1):
    if n % i == 0:
        print(i)'''
        
i = 1

while i <= n: 
  if n % i==0:
     print(i)
  i += 1    