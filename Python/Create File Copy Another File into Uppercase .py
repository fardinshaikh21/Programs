import os

#file = open("abc.txt","x")
#file.close()


with open("abc.txt","w") as f:
    f.write("My Name is Fardin Shaikh.")
    f.write("\nI am From Pune.")
    f.write("\nI am 23 Years Olds.")
    f.write("\n34 62 21 68")
    f.close()

#open("copyabc.txt","x")
f1 = open("copyabc.txt","w")

'''
with open("abc.txt","r") as f:
    #print(f.read())
    data = f.read()
    f1.write(data.upper())
    
#f.close() 
f1.close()


f2 = open("copyabc.txt","r")
print(f2.read())
    
'''  