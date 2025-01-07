#print(random.randint(91,100))
#print(random.choice(l))
#print(random.randrange(2,10,2))

import random

choice = ["rock","paper","scissors"]

user_action = input(f"{choice}\n\n\tEnter Your Choise : ")

computer_action = random.choice(choice)
print(f"\nUser Choice is : {user_action} \nComputer Choice is : {computer_action}\n ")


if user_action == computer_action:
    print(f"Both players selected {user_action}. It's a tie!")

elif user_action == "rock":
    if computer_action == "scissors":
        print("Rock smashes scissors! You win!")
    else:
        print("Paper covers rock! You lose.")

elif user_action == "paper":
    if computer_action == "rock":
        print("Paper covers rock! You win!")
    else:
        print("Scissors cuts paper! You lose.")

elif user_action == "scissors":
    if computer_action == "paper":
        print("Scissors cuts paper! You win!")
    else:
        print("Rock smashes scissors! You lose.")