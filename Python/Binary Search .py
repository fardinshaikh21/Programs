l1 = [10,2,5,9,92,6,18,68,8]

"""
search = int(input("Enter Number You Want Search : "))

for i in range(len(l1)):
    
    if search == l1[i]:       
       print(f"{search} this Number is Found Index is :",i)
       break
"""

for i in range(len(l1)):
    for j in range(i+1,len(l1)):  
        if l1[i] > l1[j]:           
            t = l1[i]
            l1[i] = l1[j] 
            l1[j] = t                        
print(l1)  

search = int(input("\nEnter Number You Want Search : "))

low = 0
high = len(l1)-1
found = 0

while low <= high:
     
     mid = (low + high) // 2
     
     if l1[mid] == search:      
         found += 1
         break
         
     if l1[mid] < search:
        low = mid + 1         
     else:
        high = mid - 1
        
if found == 1:
  print(f"\n{search} this Number is Found Index is : ",mid)    
else: 
  print(f"\n{search} this Number is Not Found")    
    
    
