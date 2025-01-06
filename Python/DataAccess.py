"""
name = ["Fardin","Saad","Aman","Afan"]
age = [21,19,22,17]
address = ["Pune","Beed","Mumbai","Goa"]

data = {}

print("S_Name\tS_Age\tS_Address")
print("-------------------------")
for i in range(len(name)):
    #print(name[i],"\t",age[i],"\t",address[i])
    
    if name[i] == "Aman" :
        print(name[i],"\t",age[i],"\t",address[i])
"""   

name = input("Enter Name : ")

print(f"My Name is {name}")