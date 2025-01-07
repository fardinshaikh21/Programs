#!/usr/bin/python3

n = int(input("Enter How Many Numbers You Want : "))
list = []   

#print("Enter List Elements : ")

for i in range(n):
    list += (int(input("Enter Number : ")),)


min = list[0]
max = list[0]

for i in range(1,n):
    if(min>list[i]):
        min = list[i]
    
    if(max<list[i]):
        max = list[i]

print("\nMinimum list in Element is : ",min)     
print("Miximum list in Element is : ",max)     
 