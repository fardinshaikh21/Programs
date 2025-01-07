n = int(input("Enter How Many Tuple Elements : "))
tuple = ()

for i in range(n):
   tuple += (int(input(f"Enter {i+1} Number : ")),)    
print(tuple) 


mid = n//2
print(tuple[:mid+1])
print(tuple[mid+1:])
    
    
'''
  for i in range(n):  
     if(i<=n/2):
        print(tuple[i],end=" ")        
     elif(i!=n/2):      
       print("\n",tuple[i],end=" ")      
'''     