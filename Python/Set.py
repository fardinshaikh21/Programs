"""
n = int(input("Enter How Many Set Elements You Want : "))
s = set()

for i in range(n):
    num = int(input(f"Enter {i+1} Number : "))
    s.add(num)   
print(s)

print("Maximum Number is : ",max(s))
print("Manimum Number is : ",min(s))
print("Sum of Number is : ",sum(s))

"""

set1 = {1,2,3,4}
set2 = {3,4,5,6}
set3 = {7,8,3,4}

print("Set1 is : ",set1)
print("Set2 is : ",set2)
print("Set3 is : ",set3)
print()

"""
print("\tOperations Perform On Set1\n")
set1.add(5)
print("Add Element 5 :",set1)
set1.remove(5)
print("Remove 5 :",set1)
#set1.remove(6)
#print(set1)
set1.discard(3)
print("Discard 3 :",set1)
#set1.discard(6)
#print(set1)
set1.pop()
print("Pop First Element :",set1)
set4 = set2.copy()
print("Copy set2 into Set4 :",set4)
set4.clear()
print("Clear Set4 Empty Set4 :",set4)
"""

"""
uni = set1.union(set2,set3)
print("Union Set1 & Set2 & Set3 \n",uni)

inter = set1.intersection(set2,set3)
print("Intersection Set1 & Set2 & Set3 \n",inter)

diffe = set1.difference(set2,set3)
print("Difference Set1 \n",diffe)

sym_diff = set1.symmetric_difference(set2)
print("Symmetric Diffrence \n",sym_diff)

"""

s1 = {10,20,30,40}
s2 = {20,30,10}
s3 = {30,20}

print("S1 is : ",s1)
print("S2 is : ",s2)
print("S3 is : ",s3)
print()

subset1 = s1.issubset(s2)
print("S1 is Subset of S2 : ",subset1)
subset2 = s2.issubset(s1)
print("S2 is Subset of S1 : ",subset2)

super1 = s1.issuperset(s2)
print("S1 is Superset of S2 : ",super1)
super2 = s2.issuperset(s3)
print("S2 is Superset of S3 : ",super2)
super3 = s3.issuperset(s2)
print("S3 is Superset of S2 : ",super3)
