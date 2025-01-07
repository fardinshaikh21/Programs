#!/usr/bin/python3

n = int(input("Enter the Number : "))
i = 1

print(n,"this Number Factors is : ")
while(i<=n/2):
    if(n%i==0):
        print("\t",i)
    i += 1     