import os

with open("abc.txt","r") as f:    
     content = f.read() 
     for i in range(len(content)-1,-1,-1):
         print(content[i],end="")
       
print("\nFile Size is : ",os.path.getsize("abc.txt"))    
