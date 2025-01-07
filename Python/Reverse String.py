#!/usr/bin/python3

str = input("Enter the String : ")
print("Original String is : ",str)

print("Reverse String is :")
for i in range(len(str)-1,-1,-1):
    print(str[i],end="")
    
print("\nReverse String is : ",str[::-1])
    