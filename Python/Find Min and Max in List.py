n = int(input("Enter the Number : "))
l = []

for i in range(n):
    num = int(input(f"Enter {i+1} Number : "))
    l.append(num)     
print(l)


min1 = l[0]
max1 = l[0]

for i in range(1,n):
    
    if(min1 > l[i]):
        min1 = l[i]
        
    if(max1 < l[i]):
       max1 = l[i]    
       
print("Maximum Element is : ",max1)
print("Minimum Element is : ",min1)      
print("Maximum Element is : ",max(l))
print("Minimum Element is : ",min(l))