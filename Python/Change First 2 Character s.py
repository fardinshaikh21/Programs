#!/usr/bin/python3

str1 = input("Enter First String : ")
str2 = input("Enter Second String : ")

print("First String is : \n",str1)
print("Second String is : \n",str2)

str3 = str2[:2] + str1[2:]
str4 = str1[:2] + str2[2:]

print("First String is : \n",str3)
print("Second String is : \n",str4)
