#!/usr/bin/python3

n = int(input("Enter the Number : "))
tuple = ()

for i in range(n):
    tuple += (int(input(f"Enter Number {i} : ")),)
  
print("\n\tTuple is Numbers are : \n",tuple)

for i in range(n):
    if(i<n/2):
        print(tuple[i],end=" ")
    else: 
        print(tuple[i],end=" ")   