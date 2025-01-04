#!/usr/bin/python3

def table(n):
 
 print(f"\n{n} this Number Multiplication Table is \n")
 for i in range(1,11):
   print(f"\t{n} * {i} = ",n*i)

def table1(n):
 i = 1
 print(f"\n{n} this Number Multiplication Table is \n")
 while(i<=10):
  print(f"\t{n} * {i} = ",n*i)
  i += 1

def prime(n):
    count=0;
    for i in range(1,n+1):
       if(n%i==0):
          count += 1
          
    if(count==2):
      print(f"{n} This is Prime Number ")      
    else:
      print(f"{n} This is Not Prime Number") 

def sum(n):
    sum = 0
    for i in range(1,n+1):
        sum += i   
    
    print("Total Sum is : ",sum)   
        
def sum1(n):
    
    sum = 0
    i = 1
    
    while(i<=n):
      sum += i
      i += 1
     
    print("Total Sum is : ",sum)    
      
def fac(n):
    fac = 1
    
    for i in range(1,n+1):
        fac *= i
     
    print(f"{n} this Number Factorial is : ",fac) 
 
def fac1(n):  
  fac = 1
  i = 1
  
  while(i<=n):  
    fac *= i
    i += 1
  print(f"{n} this Number Factorial is : ",fac)   
    
def celsius(c):

   celsius = ( c * 9 / 5) + 32
   print(f"{c} Celsius to Fahrenheit is : ",celsius)
 
def Fahrenheit(f):

   Fahrenheit = (f - 32) * (5/9)
   print(f"{f} Fahrenheit to Celsius is : ", Fahrenheit)


def Prime(n):
  
  for i in range(1,n+1):
     cn = i
     count = 0
     c = 0
     
     for j in range(1,cn+1):
       
        if(cn%j==0):
          count += 1
     if(count==2):
       print(cn)
       c += 1
  print ("\nTotal Number are : ",c)    
       
          
    
    
def pattern1(n):

  for i in range(1,n+1):
      for j in range(1,i+1):
          print("*",end="")
      print("")

def pattern2(n):

  for i in range(n,0,-1):
      for j in range(1,i+1):
          print("*",end = "")
      print()

def pattern3(n):

  for i in range(1,n+1):
      for j in range(1,i+1):
          print(j,end="")
      print()     
      
def cal(a,b):
     
     print("Press 1 To Addition ")
     print("Press 2 To Subtraction ")
     print("Press 3 To Multiplication ")
     print("Press 4 To Division ")
     print("Press 5 To Remainder ")
     
     c = int(input("Enter Your Choice : "))
     
     switch c
       case 1: 
        print("Addition is : ",a+b)
        break 
       case 2: 
        print("Subtraction is : ",a-b)
        break 
       case 3: 
        print("Multiplication is : ",a*b)
        break 
       case 4:
        print("Division is : ",a/b)
        break
       case 5:
        print("Remainder is : ",a%b)
        break 
       default :
        print("You Enter Invalid Number!")
     
          
n = int(input("Enter First Number : "))
m = int(input("Enter Second Number : "))

 cal(m,n)


#table(n)
#table1(n)
#prime(n)
#sum(n)
#sum1(n)
#fac(n)
#fac1(n)
#celsius(n)
#Fahrenheit(n)
#Prime(n)
#pattern1(n)
#pattern2(n)
#pattern3(n)


'''
def fac(n):
  sum = 1
  for i in range(1,n+1):
    sum *= i 
  print(f"{n} this Number Factorial is : ",sum)
 
fac(6)
'''


'''
a = int(input("Enter Number 1 : "))
b = int(input("Enter Number 2 : "))
c = int(input("Enter Number 3 : "))
d = int(input("Enter Number 4 : "))

if (a>b and a>c and a>d):
    print(f"\nFirst Number is Greater : {a}")
elif (b>a and b>c and b>d):
    print(f"\nSecond Number is Greater : {b}")
elif(c>a and c>b and c>d):
    print(f"\nThird Number is Greater : {c}")
else:
   print(f"\nFourth Number is Greater : {d}")

'''    


"""
n = int(input("Enter the Number : "))

for i in range(1,n+1):
  for j in range(1,i+1):
      print("*",end=" ")
  print()   
"""



"""
def find_max_min(numbers_tuple):
    if not numbers_tuple:
        return None, None  # Return None for both max and min if the tuple is empty

    max_num = max(numbers_tuple)
    min_num = min(numbers_tuple)

    return max_num, min_num

# Main program
if __name__ == "__main__":
    # Accept 'n' numbers from the user
    n = int(input("Enter the number of elements in the tuple: "))
    num_tuple = tuple(float(input(f"Enter element {i + 1}: "))
    for i in range(n))

    # Find and display the maximum and minimum values
    max_value, min_value = find_max_min(num_tuple)
    print(f"Maximum value: {max_value}")
    print(f"Minimum value: {min_value}")
"""


"""
def find_max_min(numbers):
  if not numbers:
    return None,None
  else:
     max_num = max(numbers)
     min_num = min(numbers)
     addition = sum(numbers)
     return max_num,min_num,addition 

n = int(input("Enter How Many Numbers in List : "))
l = []
 
for i in range(n):
  list = int(input(f"Enter Number {i+1} : "))
  l.append(list)

max_value,min_value,addition= find_max_min(l)
print(f"Maximum value: {max_value}")
print(f"Minimum value: {min_value}")
print(f"Addition is : {addition}")
"""


"""
def find_max_min(numbers):
    if not numbers:
        return None, None  # Return None for both max and min if the list is empty

    max_num = max(numbers)
    min_num = min(numbers)

    return max_num, min_num

# Main program
if __name__ == "__main__":
    # Accept 'n' numbers from the user
    n = int(input("Enter the number of elements in the list: "))
    num_list = []

    for i in range(n):
        num = float(input(f"Enter element {i + 1}: "))
        num_list.append(num)

    # Find and display the maximum and minimum values
    max_value, min_value = find_max_min(num_list)
    print(f"Maximum value: {max_value}")
    print(f"Minimum value: {min_value}")
"""     
  
  
#(Slip 1)Write a program which finds sum of digits of a number.
"""
def sum_of_digits(number):
    # Convert the number to a string to iterate through its digits
    num_str = str(number)

    # Initialize the sum to zero
    digit_sum = 0

    # Iterate through each digit and add it to the sum
    for digit in num_str:
        digit_sum += int(digit)

    return digit_sum

# Main program
if __name__ == "__main__":
    # Accept a number from the user
    num = int(input("Enter a number: "))

    # Calculate and display the sum of digits
    result = sum_of_digits(num)
    print(f"The sum of digits in {num} is: {result}")
"""


'''
(Slip 1)Define a class Date (Day, Month, Year) with functions to accept and display it. Accept
#date from user. Throw user defined exception “invalidDateException” if the date is
invalid.
'''
"""
class InvalidDateException(Exception):
    def __init__(self, message="Invalid date"):
        self.message = message
        super().__init__(self.message)

class Date:
    def __init__(self, day, month, year):
        self.day = day
        self.month = month
        self.year = year

    def display_date(self):
        print(f"Date: {self.day}/{self.month}/{self.year}")

def accept_date_from_user():
    try:
        day = int(input("Enter day: "))
        month = int(input("Enter month: "))
        year = int(input("Enter year: "))

        # Validate the entered date
        if not (1 <= day <= 31 and 1 <= month <= 12 and year > 0):
            raise InvalidDateException("Invalid date")

        return Date(day, month, year)

    except ValueError:
        raise InvalidDateException("Invalid input. Please enter valid numbers for day, month, and year.")

# Main program
if __name__ == "__main__":
    try:
        # Accept date from the user
        user_date = accept_date_from_user()

        # Display the entered date
        user_date.display_date()

    except InvalidDateException as e:
        print(f"Error: {e}")
           
"""


#(Q3)Write a program to calculate the factorial of a number.
"""
def calculate_factorial(number):
    if number < 0:
        return "Factorial is undefined for negative numbers."
    elif number == 0 or number == 1:
        return 1
    else:
        factorial = 1
        for i in range(2, number + 1):
            factorial *= i
        return factorial

# Main program
if __name__ == "__main__":
    # Accept a number from the user
    num = int(input("Enter a number to calculate its factorial: "))

    # Calculate and display the factorial
    result = calculate_factorial(num)
    print(f"The factorial of {num} is: {result}")
"""  


'''
(Q4)Write a Python program to count frequency of each character in a given string using user
defined function.
'''
"""
def count_character_frequency(input_string):
    # Dictionary to store character frequencies
    char_frequency = {}

    for char in input_string:
        # Using get() method to get the value for a key
        # If the key is not present, set the default value to 0
        char_frequency[char] = char_frequency.get(char, 0) + 1

    return char_frequency

# Input: Get a string from the user
user_input = input("Enter a string: ")

# Call the function to count character frequency
result = count_character_frequency(user_input)

# Display the result
print("Character frequency in the given string:")
for char, frequency in result.items():
    print(f"{char}: {frequency}")
""" 


#(Q5) Write a program which finds all factors of a number.
""" 
def find_factors(number):
    factors = []

    if number < 1:
        return "Factors are undefined for non-positive numbers."

    for i in range(1, number + 1):
        if number % i == 0:
            factors.append(i)

    return factors

# Main program
if __name__ == "__main__":
    # Accept a number from the user
    num = int(input("Enter a number to find its factors: "))

    # Find and display the factors
    result = find_factors(num)
    print(f"The factors of {num} are: {result}")
""" 


'''
(Q6)Write a Python program to accept string and remove the characters which have odd index
values of a given string using user defined function
'''
"""  
def remove_odd_index_characters(input_string):
    # Using list comprehension to create a new string with characters at even indices
    result_string = ''.join([char for index, char in enumerate(input_string) if index % 2 == 0])
    return result_string

# Input: Get a string from the user
user_input = input("Enter a string: ")

# Call the function to remove characters with odd indices
result = remove_odd_index_characters(user_input)

# Display the result
print("String after removing characters with odd indices:", result)
""" 


#(Q7) Write a program to display Fibonacci series 1 to n number.
"""
def fibonacci_series(n):
    fib_series = []
    a, b = 0, 1

    while a <= n:
        fib_series.append(a)
        a, b = b, a + b

    return fib_series

# Main program
if __name__ == "__main__":
    # Accept a number from the user
    num = int(input("Enter a number 'n' to display Fibonacci series up to n: "))

    # Display the Fibonacci series
    result = fibonacci_series(num)
    print(f"Fibonacci series up to {num}: {result}")
""" 


'''
(Q8)Define a class Employee having members – id, name, department, salary. Create a subclass
called ―Manager‖ with member bonus. Define methods accept and display in both the classes.
Create n objects of the Manager class and display the details of the manager having the
maximum total salary (salary+bonus).
'''
"""
class Employee:
    def __init__(self, emp_id, name, department, salary):
        self.emp_id = emp_id
        self.name = name
        self.department = department
        self.salary = salary

    def accept(self):
        self.emp_id = input("Enter Employee ID: ")
        self.name = input("Enter Employee Name: ")
        self.department = input("Enter Department: ")
        self.salary = float(input("Enter Salary: "))

    def display(self):
        print(f"\nEmployee ID: {self.emp_id}")
        print(f"Name: {self.name}")
        print(f"Department: {self.department}")
        print(f"Salary: {self.salary}")

class Manager(Employee):
    def __init__(self, emp_id, name, department, salary, bonus):
        super().__init__(emp_id, name, department, salary)
        self.bonus = bonus

    def accept(self):
        super().accept()
        self.bonus = float(input("Enter Bonus: "))

    def display(self):
        super().display()
        print(f"Bonus: {self.bonus}")

# Main program
n = int(input("Enter the number of managers: "))

managers = []
for i in range(n):
    print(f"\nEnter details for Manager {i+1}:")
    manager = Manager('', '', '', 0, 0)
    manager.accept()
    managers.append(manager)

# Find and display the details of the manager with the maximum total salary
max_salary_manager = max(managers, key=lambda x: x.salary + x.bonus)

print("\nManager with Maximum Total Salary:")
max_salary_manager.display()
print(f"Total Salary (including bonus): {max_salary_manager.salary + max_salary_manager.bonus}")
"""


#(Q9)Write a program which reverses a string and displays both original and reversed string. 
"""
def reverse_string(input_str):
    reversed_str = input_str[::-1]
    return reversed_str

# Main program
if __name__ == "__main__":
    # Accept a string from the user
    user_input = input("Enter a string: ")

    # Reverse the string
    reversed_result = reverse_string(user_input)

    # Display both original and reversed strings
    print(f"Original string: {user_input}")
    print(f"Reversed string: {reversed_result}")
""" 


'''
(Q10)Write a program to create tuple of n numbers, print the first half values of tuple in one line
and the last half values of tuple on next line.
'''
"""
def print_half_tuples(numbers):
    # Calculate the midpoint
    midpoint = len(numbers) // 2

    # Print the first half
    print("First half values:")
    print(*numbers[:midpoint])

    # Print the last half
    print("Last half values:")
    print(*numbers[midpoint:])

# Input: Get a tuple of n numbers from the user
n = int(input("Enter the number of elements in the tuple: "))
user_tuple = tuple(map(int, input("Enter the elements separated by space: ").split()))

# Call the function to print first and last half values
print_half_tuples(user_tuple)
"""


'''
(Q11)Write a program which accepts 10 integers and prints "DUPLICATES" if any of the values
entered are duplicates otherwise prints "ALL UNIQUE
'''
"""
def check_duplicates(numbers):
    if len(numbers) == len(set(numbers)):
        return "ALL UNIQUE"
    else:
        return "DUPLICATES"

# Input: List of 10 integers
numbers = list(map(int, input("Enter 10 integers separated by space: ").split()))

# Check for duplicates
result = check_duplicates(numbers)

# Display the result
print(result)
"""


'''
(Q12)Write a Python Program to create a Class Circle and Compute the Area and the
circumference of the Circle. (use parameterized constructor).
'''
"""
import math

class Circle:
    def __init__(self, radius):
        self.radius = radius

    def compute_area(self):
        area = math.pi * (self.radius ** 2)
        return area

    def compute_circumference(self):
        circumference = 2 * math.pi * self.radius
        return circumference

# Input: Get the radius from the user
radius = float(input("Enter the radius of the circle: "))

# Create an object of the Circle class using the parameterized constructor
circle_instance = Circle(radius)

# Compute and display the area and circumference
area = circle_instance.compute_area()
circumference = circle_instance.compute_circumference()

print(f"\nArea of the circle: {area:.2f}")
print(f"Circumference of the circle: {circumference:.2f}")
"""


#(Q13)Write a program which accepts an integer value 'n' and prints all prime numbers till 'n'.
"""
def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True

def print_prime_numbers(n):
    prime_numbers = [num for num in range(2, n + 1) if is_prime(num)]
    return prime_numbers

# Main program
if __name__ == "__main__":
    # Accept an integer from the user
    num = int(input("Enter an integer 'n': "))

    # Print all prime numbers up to 'n'
    primes = print_prime_numbers(num)
    print(f"Prime numbers up to {num}: {primes}")
"""


'''
(Q14)Define a class Student having members – rollno, name, age, gender. Create a subclass called
―Test with member marks of 3 subjects. Create three objects of the Test class and display all the
details of the student with total marks.
'''
"""
class Student:
    def __init__(self, rollno, name, age, gender):
        self.rollno = rollno
        self.name = name
        self.age = age
        self.gender = gender

    def display_details(self):
        print(f"\nStudent Details:")
        print(f"Roll Number: {self.rollno}")
        print(f"Name: {self.name}")
        print(f"Age: {self.age}")
        print(f"Gender: {self.gender}")

class Test(Student):
    def __init__(self, rollno, name, age, gender, marks):
        super().__init__(rollno, name, age, gender)
        self.marks = marks

    def display_details(self):
        super().display_details()
        print(f"Marks in 3 Subjects: {self.marks}")

    def calculate_total_marks(self):
        return sum(self.marks)

# Create three objects of the Test class
student1 = Test(101, "Alice", 20, "Female", [85, 90, 92])
student2 = Test(102, "Bob", 21, "Male", [78, 88, 95])
student3 = Test(103, "Charlie", 22, "Male", [90, 92, 88])

# Display details of each student with total marks
students = [student1, student2, student3]

for student in students:
    student.display_details()
    total_marks = student.calculate_total_marks()
    print(f"Total Marks: {total_marks}")
"""


'''
(Q15)Create a class student having members. Use operator overloading to check the age of two 
student objects. Also display the who age is greater.
'''
"""
class Student:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def __gt__(self, other):
        return self.age > other.age

    def display_details(self):
        print(f"\nStudent Details:")
        print(f"Name: {self.name}")
        print(f"Age: {self.age}")

# Create two objects of the Student class
student1 = Student("Alice", 21)
student2 = Student("Bob", 20)

# Display details of each student
student1.display_details()
student2.display_details()

# Check and display which student is older
if student1 > student2:
    print(f"\n{student1.name}'s age is greater.")
elif student2 > student1:
    print(f"\n{student2.name}'s age is greater.")
else:
    print("\nBoth students have the same age.")
"""


'''
(Q16)Write a program to get a single string from two given strings and swap the first two
characters of each string. [10]
Sample String: 'abc', 'xyz'
Expected Output: xycabz
'''
"""  
def swap_first_two_chars(str1, str2):
    # Swap the first two characters of each string
    new_str1 = str2[:2] + str1[2:]
    new_str2 = str1[:2] + str2[2:]

    # Concatenate the swapped strings
    result_string = new_str1 + new_str2
    return result_string

# Input: Get two strings from the user
str1 = input("Enter the first string: ")
str2 = input("Enter the second string: ")

# Call the function to swap the first two characters and concatenate the strings
result = swap_first_two_chars(str1, str2)

# Display the result
print("Expected Output:", result)
"""


#(Q17) Read a text file and print all the numbers present in the text file. Also print the size of the file.
"""
import os

def extract_numbers_from_text(file_path):
    try:
        with open(file_path, 'r') as file:
            content = file.read()
            # Using list comprehension to extract numbers from the text
            numbers = [word for word in content.split() if word.isdigit()]
            return numbers
    except FileNotFoundError:
        print(f"File not found: {file_path}")
        return []

def get_file_size(file_path):
    try:
        size = os.path.getsize(file_path)
        return size
    except FileNotFoundError:
        print(f"File not found: {file_path}")
        return -1

# Input: Get the file path from the user
file_path = input("Enter the path of the text file: ")

# Extract and print numbers from the text file
numbers = extract_numbers_from_text(file_path)
if numbers:
    print("\nNumbers present in the text file:", numbers)
else:
    print("No numbers found in the text file.")

# Print the size of the file
file_size = get_file_size(file_path)
if file_size != -1:
    print(f"\nSize of the file: {file_size} bytes")
"""
 

'''
(Q19)  Define a class Person having members – name, address. Create a subclass called
―Employee with member staffed, salary. Create ‘n’ objects of the Employee class and display
all the details of the Employee.
'''
"""
class Person:
    def __init__(self, name, address):
        self.name = name
        self.address = address

    def display_details(self):
        print(f"\nPerson Details:")
        print(f"Name: {self.name}")
        print(f"Address: {self.address}")

class Employee(Person):
    def __init__(self, name, address, staffid, salary):
        super().__init__(name, address)
        self.staffid = staffid
        self.salary = salary

    def display_details(self):
        super().display_details()
        print(f"Staff ID: {self.staffid}")
        print(f"Salary: {self.salary}")

# Create three objects of the Employee class
employee1 = Employee("Alice", "123 Main St", "E101", 50000)
employee2 = Employee("Bob", "456 Oak St", "E102", 60000)
employee3 = Employee("Charlie", "789 Pine St", "E103", 55000)

# Display details of each employee
employees = [employee1, employee2, employee3]

for employee in employees:
    employee.display_details()
 
"""  

 
"""
def element_exists_in_tuple(element, my_tuple):
    return element in my_tuple

# Input: Get a tuple from the user
my_tuple = tuple(map(int, input("Enter elements of the tuple separated by space: ").split()))

# Input: Get the element to check for
element_to_check = int(input("Enter the element to check for: "))

# Check whether the element exists in the tuple
if element_exists_in_tuple(element_to_check, my_tuple):
    print(f"{element_to_check} exists in the tuple.")
else:
  print(f"{element_to_check} does not exist in the tuple.")
"""


"""  
class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def __lt__(self, other):
        return self.age < other.age

    def display_details(self):
        print(f"\nPerson Details:")
        print(f"Name: {self.name}")
        print(f"Age: {self.age}")

# Create two objects of the Person class
person1 = Person("Alice", 25)
person2 = Person("Bob", 22)

# Display details of each person
person1.display_details()
person2.display_details()

# Check and display which person is younger
if person1 < person2:
    print(f"\n{person1.name}'s age is smaller.")
elif person2 < person1:
    print(f"\n{person2.name}'s age is smaller.")
else:
    print("\nBoth persons have the same age.")
""" 


#(Slip 16) Write python program to accept and print string in reverse order using recursion.
"""
def reverse_string(input_str):
    if len(input_str) == 0:
        return ""
    else:
        return input_str[-1] + reverse_string(input_str[:-1])

# Input: Get a string from the user
user_input = input("Enter a string: ")

# Call the function to print the string in reverse order
reversed_str = reverse_string(user_input)

# Display the result
print("String in reverse order:", reversed_str)
"""


'''
(slip 16) Define a class employee having members – name, address. Create a subclass
called―staff with member staffid, salary. Create ‘n’ objects of the staff class and display all the
details of the staff.
'''
"""
class Employee:
    def __init__(self, name, address):
        self.name = name
        self.address = address

    def display_details(self):
        print(f"\nEmployee Details:")
        print(f"Name: {self.name}")
        print(f"Address: {self.address}")

class Staff(Employee):
    def __init__(self, name, address, staffid, salary):
        super().__init__(name, address)
        self.staffid = staffid
        self.salary = salary

    def display_details(self):
        super().display_details()
        print(f"Staff ID: {self.staffid}")
        print(f"Salary: {self.salary}")

# Input: Get the number of staff members
n = int(input("Enter the number of staff members: "))

# Create 'n' objects of the Staff class
staff_members = []
for i in range(n):
    print(f"\nEnter details for Staff Member {i + 1}:")
    name = input("Enter Name: ")
    address = input("Enter Address: ")
    staffid = input("Enter Staff ID: ")
    salary = float(input("Enter Salary: "))

    staff_member = Staff(name, address, staffid, salary)
    staff_members.append(staff_member)

# Display details of each staff member
for staff_member in staff_members:
    staff_member.display_details()
"""


'''
(slip 17) Write a Python program to check if a given key already exists in a dictionary. If key exists
replace with another key/value pair.
'''
"""
def replace_key(dictionary, old_key, new_key, new_value):
    if old_key in dictionary:
        # Replace the existing key with the new key/value pair
        dictionary[new_key] = new_value
        del dictionary[old_key]
    else:
        # If the key doesn't exist, simply add the new key/value pair
        dictionary[new_key] = new_value

# Input: Get a dictionary from the user
user_dict = dict(input("Enter a dictionary (key-value pairs separated by commas): ").split(','))

# Input: Get the key to check and replace
old_key = input("Enter the key to check and replace: ")
new_key = input("Enter the new key: ")
new_value = input("Enter the new value: ")

# Call the function to replace the key if it exists
replace_key(user_dict, old_key, new_key, new_value)

# Display the updated dictionary
print("\nUpdated Dictionary:", user_dict)
"""


#(slip 17) Write a Python Program to Create a Class which Performs Basic Calculator Operations.

"""
class Calculator:
    def add(self, num1, num2):
        return num1 + num2

    def subtract(self, num1, num2):
        return num1 - num2

    def multiply(self, num1, num2):
        return num1 * num2

    def divide(self, num1, num2):
        if num2 == 0:
            return "Cannot divide by zero"
        else:
            return num1 / num2

# Create an object of the Calculator class
calculator = Calculator()

# Input: Get two numbers from the user
num1 = float(input("Enter the first number: "))
num2 = float(input("Enter the second number: "))

# Perform calculator operations
sum_result = calculator.add(num1, num2)
difference_result = calculator.subtract(num1, num2)
product_result = calculator.multiply(num1, num2)
division_result = calculator.divide(num1, num2)

# Display the results
print(f"\nSum: {sum_result}")
print(f"Difference: {difference_result}")
print(f"Product: {product_result}")
print(f"Division: {division_result}")
""" 


'''
(slip 18) Write python program using an anonymous function to find area of circle, circumference of
circle.
'''
"""
# Function to calculate area and circumference using anonymous functions
calculate_circle_properties = lambda radius: (3.14159 * radius ** 2, 2 * 3.14159 * radius)

# Input: Get the radius from the user
radius = float(input("Enter the radius of the circle: "))

# Calculate area and circumference using the anonymous function
area, circumference = calculate_circle_properties(radius)

# Display the results
print(f"\nArea of the circle: {area:.2f}")
print(f"Circumference of the circle: {circumference:.2f}")
"""   


'''
(slip 18) Python Program to Create a Class in which One Method Accepts a String from the 
User and Another method Prints it. Define a class named Country which has a method
called print Nationality. Define subclass named state from Country which has a method
called print State. Write a method to print state, country and nationality
'''
"""
class Country:
    def __init__(self):
        self.nationality = ""

    def accept_nationality(self):
        self.nationality = input("Enter the nationality: ")

    def print_nationality(self):
        print(f"Nationality: {self.nationality}")

class State(Country):
    def __init__(self):
        super().__init__()
        self.state_name = ""

    def accept_state_name(self):
        self.state_name = input("Enter the state name: ")

    def print_state(self):
        print(f"State: {self.state_name}")

    def print_details(self):
        self.print_state()
        self.print_nationality()

# Create an object of the State class
state_obj = State()

# Input: Get the state name and nationality from the user
state_obj.accept_state_name()
state_obj.accept_nationality()

# Display state, country, and nationality details
state_obj.print_details()
"""


#(slip 19 ) Write a program to accept a number and display its first ten multiples.
"""
# Input: Get a number from the user
number = int(input("Enter a number: "))

# Display the first ten multiples of the given number
print(f"\nFirst ten multiples of {number}:")
for i in range(1, 11):
    print(f"{number} x {i} = {number * i}")
"""


'''
(slip 20) Write a program to accept 10 numbers display the sum of odd numbers and sum of even
numbers.
'''
"""
 # Function to calculate the sum of odd and even numbers
def calculate_sum(numbers):
    sum_even = 0
    sum_odd = 0

    for num in numbers:
        if num % 2 == 0:
            sum_even += num
        else:
            sum_odd += num

    return sum_even, sum_odd

# Main program
if __name__ == "__main__":
    # Accept 10 numbers from the user
    numbers = []
    for i in range(10):
        num = int(input(f"Enter number {i + 1}: "))
        numbers.append(num)

    # Calculate the sum of even and odd numbers
    sum_even, sum_odd = calculate_sum(numbers)

    # Display the results
    print(f"Sum of even numbers: {sum_even}")
    print(f"Sum of odd numbers: {sum_odd}")
"""

'''
(slip 20) Write a program to accept a number 'n', and display the following pattern (Floyd's
triangle)n=3
1
2 3
4 5 6 
'''
"""
def print_floyds_triangle(n):
    num = 1
    for i in range(1, n + 1):
        for j in range(1, i + 1):
            print(num, end=" ")
            num += 1
        print()

# Main program
if __name__ == "__main__":
    # Accept the value of 'n' from the user
    n = int(input("Enter the value of 'n': "))

    # Display Floyd's triangle pattern
    print_floyds_triangle(n)
"""  

  
"""
def check_divisibility(num):
    if num % 3 == 0 and num % 5 == 0:
        return f"{num} is divisible by both 3 and 5."
    elif num % 3 == 0:
        return f"{num} is divisible by 3 but not by 5."
    elif num % 5 == 0:
        return f"{num} is divisible by 5 but not by 3."
    else:
        return f"{num} is not divisible by either 3 or 5."

# Main program
if __name__ == "__main__":
    # Accept a number from the user
    num = int(input("Enter a number: "))

    # Check and display divisibility
    result = check_divisibility(num)
    print(result)
"""  


"""
def convert_to_uppercase(input_file, output_file):
    try:
        # Read from the input file
        with open(input_file, 'r') as infile:
            content = infile.read()

        # Convert lowercase to uppercase
        content_upper = content.upper()

        # Write to the output file
        with open(output_file, 'w') as outfile:
            outfile.write(content_upper)

        # Display the content of the output file
        with open(output_file, 'r') as display_file:
            display_content = display_file.read()
            print("Content of the output file:")
            print(display_content)

    except FileNotFoundError:
        print(f"Error: File '{input_file}' not found.")

# Main program
if __name__ == "__main__":
    # Accept input and output file names from the user
    input_filename = input("Enter the input file name: ")
    output_filename = input("Enter the output file name: ")

    # Call the function to convert and display
    convert_to_uppercase(input_filename, output_filename)
      
"""


"""
import math

class Circle:
    def __init__(self, radius):
        self.radius = radius

    def __add__(self, other):
        # Overloading the '+' operator to add radii
        if isinstance(other, Circle):
            return Circle(self.radius + other.radius)
        else:
            return NotImplemented

    def calculate_area(self):
        # Calculate and display the area of the circle
        area = math.pi * self.radius**2
        print(f"Area of the circle with radius {self.radius}: {area:.2f}")

# Main program
if __name__ == "__main__":
    # Create two Circle objects
    circle1 = Circle(3)
    circle2 = Circle(2)

    # Add the radii of the two circles using operator overloading
    result_circle = circle1 + circle2

    # Display the area of the resulting circle
    result_circle.calculate_area()
""" 


"""
def count_word_frequency(file_path, target_word):
    try:
        # Read the content of the file
        with open(file_path, 'r') as file:
            content = file.read()

        # Count the frequency of the target word
        word_count = content.lower().split().count(target_word.lower())

        # Display the result
        print(f"The word '{target_word}' appears {word_count} times in the file.")

    except FileNotFoundError:
        print(f"Error: File '{file_path}' not found.")

# Main program
if __name__ == "__main__":
    # Accept the file path and the target word from the user
    file_path = input("Enter the file path: ")
    target_word = input("Enter the word to count: ")

    # Call the function to count word frequency
    count_word_frequency(file_path, target_word)
"""


"""
import math

class Shape:
    def __init__(self):
        pass

    def area(self):
        return 0

    def volume(self):
        return 0

class Square(Shape):
    def __init__(self, length):
        super().__init__()
        self.length = length

    def area(self):
        return self.length * self.length

    def volume(self):
        # Square has no volume, so returning 0
        return 0

class Circle(Shape):
    def __init__(self, radius):
        super().__init__()
        self.radius = radius

    def area(self):
        return math.pi * self.radius**2

    def volume(self):
        # Circle has no volume, so returning 0
        return 0

# Main program
if __name__ == "__main__":
    # Create instances of Square and Circle
    square = Square(5)
    circle = Circle(5)

    # Display area and volume for Square
    print(f"Square - Area: {square.area()}, Volume: {square.volume()}")

    # Display area and volume for Circle
    print(f"Circle - Area: {circle.area()}, Volume: {circle.volume()}")
"""    

    