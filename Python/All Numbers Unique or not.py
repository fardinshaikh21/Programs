n = int(input("Enter How Many Numbers : "))
l = []
count = 0  

for i in range(n):   
    num = int(input(f"Enter {i+1} Number : "))
    l.append(num) 
print(l)

for i in range(n):
    for j in range(i+1,n):
        if(l[i]==l[j]):
            count += 1
            
if(count>0):
    print("Duplicates")
else:
    print("All Unique")    

