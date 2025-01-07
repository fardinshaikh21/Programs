#!/usr/bin/python3

def Pascal(n):
    
    for i in range(n):
        for space in range(n-i-1):
            print(" ",end="")
       # value = 1    
        for j in range(i+1):
            if(i==0 or j==0):
                value = 1
            else:
                value = value * (i-j+1) / j
            print(int(value),end=" ")
        print()  
        
n = int(input("Enter The Pascal Length : ")) 
Pascal(n)