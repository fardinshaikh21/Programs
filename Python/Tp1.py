"""
import random as rm
import math as m


n = int(input("Enter How Many Student Details You \nWant : "))
l = []

for i in range(n):
    
    Rno = int(input("Enter Student Roll No : "))
    Name = input("Enter Student Name : ")
    Class = input("Enter Student Class : ")
    Address = input("Enter Student Address : ")
    Phone_No = int(input("Enter Student Phone No : "))
           
print(l)    
"""    

import mysql as myconn

db = myconne.connect(host = "localhost",username = "username",password = "12345",database = "f1")

print("Connected Successfully...")