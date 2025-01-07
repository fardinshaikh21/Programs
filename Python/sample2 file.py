#!/usr/bin/python3

import os
'''
f = open("self.txt","x")
f.write("I am Fardin Salauddin Shaikh.\nI am From Pune.\nI am Study in Abeda Inamdaar Senior College\nI am 21 Year Old.")
f.close()
'''

'''
# Delete File Using Remove Method
if os.path.exists("myself.txt"):
  os.remove("myself.txt")
else:
  print("The file does not exist")
'''

# Read Data form File using read and for loop
f = open("self.txt","r")
print(f.read()) 

#for i in f:
# print(i)

print("File Size is : ",os.path.getsize("self.txt"))


# Display Size of File Using Os Methods 
s = os.stat("self.txt")
print("File Size in Byte is : ",s.st_size)
  
  
   
