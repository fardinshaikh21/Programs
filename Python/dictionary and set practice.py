#!/usr/bin/python3

dict = {"Fardin" : 21,"Akash":27,"Aman":7}
print(type(dict))
print(dict)

print(dict.keys())
print(dict.values())
print(dict.items())

update1 = {"Saad":5}

print(dict.update(update1))
print(dict)

print(dict.get("Fardin"))
print(dict.get("Shaikh")) # display none
print(dict.get(21)) # display none
print(dict["Fardin"])
#print(dict["Shaikh"]) display error SHIAKH is not present 

set1= {1,2,3,5,1}
print(type(set1))
print(set1)

set2 = set()
set2.add(1)
set2.add(2)
set2.add(3)
print(type(set2))
print(set2)