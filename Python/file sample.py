import os
#f = open("Fardin.text","x")

f = open("Fardin.text","w")

f.write("I am Fardin Salauddin Shaikh.")
f.write("I am From Pune")

f = open("Fardin.text","r")

#print(f.read())
#text = f.readline()
#print(text)
#text = f.readline()
#print(text)

size = os.path.getsize("Fardin.text")
print("length of File is : ",size)

details = os.stat("Fardin.text")
print(details.st_size,"bytes")

for i in f:
    print(i)

    
f.close()


    