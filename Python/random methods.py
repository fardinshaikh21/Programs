import random

print(random.random())

print(random.randint(1,5))

print(random.randrange(1,10,2))
print(random.randrange(0,10,2))

n = (1,2,3,4,5)
print(random.choice(n))
print(random.choice('Fardin'))
print(random.choice([10,20,30,40]))
 
numbers = [100,200,300,400] 
random.shuffle(numbers)
print(numbers)
        