import os

with open("abc.txt","r") as f:
    content = f.read()
    word = content.split()
    count = 0
    for i in word:      
        try:
            num = int(i)
            print(num,end=" ")
            count += 1
        except:
            pass            
    print(f"\n\nTotal {count} numbers are present ")             
print(f"{f.name} this File Size is : ",os.path.getsize("abc.txt"))
