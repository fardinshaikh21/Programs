
n = int(input("Enter How Many Dictionary Elements You Want : "))
d = {}

for i in range(n):
    key = input("Enter Key :")
    value = input("Enter Value : ")
    d[key] = value
   
print(d)

search = input("\nEnter Key You Want Check : ")

if search in d.keys():
    print("Key is Present in Dictionary")
    new = input("Replaced New Key : ")
    d[new] = d.pop(search)
else:
    print("All Keys are Dictionary Unique")  

print(d)  
    
