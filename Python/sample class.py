#!/usr/bin/python3

class Student:
    
    @staticmethod
    def Accept():
        Student.a = int(input("Enter First Number : "))
        Student.b = int(input("Enter Second Number : "))
    
    @staticmethod
    def Display():  
        print(f"Addition is {Student.a} + {Student.b} =", Student.a + Student.b)
        print(f"Subtraction is {Student.a} - {Student.b} =", Student.a - Student.b)
        print(f"Multiplication is {Student.a} * {Student.b} =", Student.a * Student.b)
        print(f"Division is {Student.a} / {Student.b} =", Student.a // Student.b)
        print(f"Remainder is {Student.a} % {Student.b} =", Student.a % Student.b)
       
       
s = Student()
s.Accept()  
s.Display()   