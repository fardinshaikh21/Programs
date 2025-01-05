import os

with open("abc.txt","r") as f:
    #print(f.read())
    content = f.read()
    word = content.split()
    print("\nWord Length is : ",len(word))
    print(word)
    
    count = 0
    wd = input("Enter Word You Count : ")
    for i in word:
        if(i == wd):
          count += 1
    print(f"{wd} this Word is Present : ",count," Times")      