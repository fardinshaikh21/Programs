#!/usr/bin/python3

def sum_of_odd_and_even(numbers):
    sum_odd = 0
    sum_even = 0

    for num in numbers:
        if num % 2 == 0:
            sum_even += num
        else:
            sum_odd += num

    return sum_odd, sum_even

# Input: List of numbers
numbers = list(map(int, input("Enter a list of numbers separated by space: ").split()))

# Calculate the sum of odd and even numbers
sum_odd, sum_even = sum_of_odd_and_even(numbers)

# Display the results
print(f"Sum of odd numbers: {sum_odd}")
print(f"Sum of even numbers: {sum_even}")