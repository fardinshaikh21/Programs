#!/usr/bin/python3

n = int(input("Enter the Number : "))
sum = 0
while(n>0):
    sum += n % 10
    n = n // 10

print("this Number Digit Sum is : ",sum)   
    
    