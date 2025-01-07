'''''
f = open("Self.txt","a")
f.write("My Name is Fardin.")
f.write("I am From Pune.")
f.write("I am 23 Year Olds.")
f.close()
'''

import os
#print(os.listdir())
print("File Size is ",os.path.getsize("Self.txt"))

with open("Self.txt","r") as f:
    content= f.read()
    #reverse = content[::-1]
    #print(reverse)
    print(content[::-1])
    
    

