#!/usr/bin/python

n = int(input("Enter How Many Numbers : "))
list = []

for i in range(n):
    list += (int(input("Enter Number : ")),)

c = 0

for i in range(n):
    for j in range(i+1,n):
        if(list[i]==list[j]):
            c += 1

if(c>0):
    print("Duplicate") 
else:
    print("All Unique")                 