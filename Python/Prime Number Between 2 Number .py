#!/usr/bin/python3

n = int(input("Enter the Number : "))

j = 2
for i in range(1,n+1):
    for j in range(2,i+1):
        if(i%j==0):
            break
    if(i==j):
        print(i)         