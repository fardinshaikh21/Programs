with open("Number.txt","r") as f:
    content = f.read()
    word = content.split()
    for i in word:
       # print(i,end="")
       try:
           num = int(i)
           print(num,end=" ")
       except ValueError: 
           pass  
   #print(content.split())   
   #print(len(content.split())) 
   
import os
print(f"\n\n{f.name} File Size is : ",os.path.getsize("Number.txt"))