#!/usr/bin/python3

str = input("Enter the String : ")

count = 0

for i in range(len(str)):
    if(str[i]!=" "):
        count += 1

print(f"{str} \nThis String in Total Number of Character is : ",count)     