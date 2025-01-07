def Pattern(n):
    
    for i in range(n,0,-1):
        for j in range(i):
            print(i,end=" ")  
        print()            
n = int(input("Enter the Number : "))
Pattern(n)
