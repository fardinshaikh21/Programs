#!/usr/bin/python

str = input("Enter the String : ")

count = 0

for i in range(len(str)):
    if(str[i]!=" "):
     count += 1

print(len(str))
print("Number of Character is :",count)     