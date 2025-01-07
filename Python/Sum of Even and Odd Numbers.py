#!/usr/bin/python3


n = int(input("Enter the Numbers You Want : "))
tuple =()

for i in range(n):
   tuple += (int(input("Enter the Number : ")),)  
   
print(tuple)   

evensum = 0
oddsum = 0
    
for i in range(n):
    if(tuple[i]%2==0):
        evensum += tuple[i] 
    else:
        oddsum += tuple[i]

print("\nSum of Even Number is :",evensum)  
print("\nSum of Odd Number is :",oddsum)  
        