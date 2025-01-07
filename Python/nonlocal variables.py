#!/usr/bin/python3
a = 10
print(a)

def outer():
    a = 20
    #print(a)  
    def inner():
       nonlocal a
       a = a + 30
       print(a)
      # global a
      # a = a + 30
      # print(a)
       a = 30
       print(a)
    inner() 
    

outer() 
      