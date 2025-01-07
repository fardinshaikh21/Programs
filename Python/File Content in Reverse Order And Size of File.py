import os

print("\tOriginal File :\n")
f1 = open("Number.txt","r")
print(f1.read())

with open("Number.txt","r") as f:
    
    
   # size = os.path.getsize("Self.txt") 
   # print(size) # Size is 51
    content = f.read()
    #print(content[::-1])  # Reverse File Content 
    word = content.split() # Convert Content into Word
    #print(len(word)) # Size is 11
    print ("\n\n\tReverse File is :\n")
    for i in range(len(word)-1,-1,-1):
        print(word[i],end=" ")
print(f"\n\n{f.name} This File Size is : ",os.path.getsize("Number.txt"))    


    