
with open("Self.txt","r") as f:
    content = f.read()
    word = content.split()
    print(word)
    count = 0
    w = input("Enter the Word You Want Search : ")
    for i in range(len(word)):
        if word[i]==w:
            count += 1
    print(f"{w} this Word Present is : ",count," Times")         
        