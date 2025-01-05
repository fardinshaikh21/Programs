'''
f1 = open("Self.txt","r")
f2 = open("CopySelf.txt","w")

for i in f1:
   #print(i,end="")
   f2.write(i.upper())
'''

f2 = open("CopySelf.txt","r")
print(f2.read())   