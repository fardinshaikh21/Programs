#!/usr/bin/python3

n = int(input("Enter Any Number : "))

a = 0
b = 1

'''while n > 0 :
  print(a)
  t = a + b
  a = b
  b = t
  n -=1
  '''
  
'''i = 1

while i <= n :
  print(a)
  t = a + b
  a = b
  b = t
  
  i +=1
  '''  
  
for i in range (1,n+1):
  print(a) 
  t = a + b
  a = b
  b = t
 
  