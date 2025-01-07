#!/usr/bin/python3

n = int(input("Enter Any Number : "))
sum = 0

while n > 0:
 r = n % 10
 sum += r
 n = n // 10
print("\nGiven Digit Total Sum is : ",int(sum))