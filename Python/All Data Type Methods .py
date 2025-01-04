"""
list = [27,4,34,4,13,4,19]
list1 = []
#print("\n",list)
list.sort() # Sort Elements in Assending Order
print(list)
list.reverse() #Sort Elements in Descending Order
print(list)
list.append(100) # Add Element Last Position 
print(list)
list.insert(1,10) # Insert 10 in List 1 Position 
print(list)
list.extend("Dog") # Accept tuple,list,set, dictionary 
print(list)
list.pop(0) # Delete Element From 0 Position 
print(list)
list.pop() # Delete Element Last Position 
print(list)
list.remove("D") # Delete Particular Elements 
print(list)
del list[0] # Delete Element From 0 Index
print(list)
list1 = list.copy()  # Copy Elements one List to Another List
print(list1) 
list1.clear() # Delete All Elements In List1
print(list1)
print(list)
print(list.count(4)) # Return no of Elements Present in List 
print(list.index(100)) # Return Particular Element Index 
print(len(list)) # Return List Length 
"""

"""
dict = {"fardin":21,"Akash":12,"Aman":7,"Akash":15}
print(dict)

print(dict.get("fardin")) # Return Value
print(dict.keys()) # Return All Keys
print(dict.values()) # Return All Values 
print(dict.items()) # Return Key and Value in Tuple Format
dict.update({"fardin" : 50}) # Update Value
print(dict)
dict["fardin"] = 100 # Update Value
print(dict)
dict["Saad"] = "Pune" # Insert New Key and Value 
print(dict)
dict.update({"Numan" : "Beed"}) # Insart new Key And Value 
print(dict)
dict.pop("Akash") # Delete Particular Elements Key and Value 
print(dict)
dict.popitem() # Delete Last Particular Key And Value 
print(dict)
del dict["Saad"] # Delete Particular Key and Value 
print(dict)
dict1 = dict.copy() # Copy One Dictionary to Another Dictionary 
print(dict1)
del dict # Delete Dictionary in All Keys and Value 
print(dict)
dict.clear() # Delete  Dictionary in All key and Values 
print(dict)
"""

"""
tuple1 = (1,2,3,4)
tuple = ("Fardin",23,"Aman",23,1,3,True,3)
print("\n",tuple)
print(len(tuple))
print(tuple[1])
print(tuple[2:5])
print(tuple[::-1])
print(tuple[-7:-4])
print(tuple[:3])
print(tuple[::2])
print(tuple.index(23))
print(tuple.count(23))
print(tuple+tuple1)
print(tuple1 * 2)

l = list(tuple1)
print(l)
l.append("Fardin")
print(l)
l.remove("Fardin")
print(l)

for i in l:
    print(i)

"""


set1 = {9,2,4,5,1,3,8}
set2 = {1,2,3,4,5,1,3}
print(set1)
print(set2)
set1.add("Fardin")
print(set1)
set1.update("Shaikh")
print(set1)
set2.update(set1) # Insert Any Tuple Set Dictionary List
print(set2)
#set1.remove("S")
#print(set1)
set1.remove("Fardin")
print(set1)
set1.discard(2)
print(set1)
x = set2.pop()
print(x)
print(set2)
set1.clear()
print(set1)
#del set2
#print(set2)

set3 = {1,2,8,3,4,5}
set4 = {1,2,7,4,9}

set5 = set3.union(set4)
print(set5)
set3.update(set4)
print(set3)
set3.intersection_update(set4)
print(set3)
x = set3.intersection(set4)
print(x)
s = set3.symmetric_difference(set4)
print(s)
set7 = set3.copy()
print(set7)


'''
set1 = {'A','B','C','D','B','a'}
set2 = {'Z','a','F','S','A','Z'}

print(set1)
print(set2)
x = set1.intersection(set2)
print(x)
set1.intersection_update(set2)
print(set1)
set1.symmetric_difference_update(set2)
print(set1)
'''