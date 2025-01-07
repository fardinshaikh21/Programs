
r = int(input("Enter How Many Rows : "))
c = int(input("Enter How Many Columns : "))

matrix = []

print("\n\nEnter Matrix Elements : ")
for i in range(r):
    a = []
    for j in range(c):
       a.append(int(input()))  
    matrix.append(a)
   
print("\t\n\nMatrix\n")   
for i in range(r):
    for j in range(c):
      print(matrix[i][j],end=" ")
    print()
    
   
      