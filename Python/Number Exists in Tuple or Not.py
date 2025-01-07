#!/usr/bin/python3

n = int(input("Enter How Many Tuples Elements You Want : ")) 
tuple =()

for i in range(n):
    tuple += (int(input("Enter Element : ")),)
    
print("\n\tTuple Elements Are : \n ",tuple)

s = int(input("\nEnter Element You Want Search : "))

count = 0
for i in range(n):
    if(tuple[i]==s):
        count += 1

if(count>0):
    print(f"\n{s} this Number is Present in Tuple ") 
else:
    print(f"\n{s} this Number is Not Present in Tuple ")       