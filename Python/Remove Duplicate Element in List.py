n = int(input("Enter List Size : "))
l = []

for i in range(n):
    num = int(input(f"Enter {i+1} Number : "))
    l.append(num)
    
print("Before Removing Duplicates Elements : ")   
print(l) 
print("\nAfter Removing Duplicates Elements ")
print(list(set(l)))