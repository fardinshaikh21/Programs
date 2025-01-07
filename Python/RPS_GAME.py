import random

choice = ["rock","paper","scissors"]

while True:
    print("\n",choice)
    user_action = input("\n\nEnter Your Choice : ")
    computer_action = random.choice(choice)
    print(f"\nUser Action is :- {user_action}\nComputer Action is :- {computer_action}")
    
    if user_action == computer_action:
        print(f"\nBoth Players Selected {user_action}. it's a Tie!")
    
    elif user_action == "scissors":
        
        if computer_action == "paper":
            print("\nScissors Cut's Paper! You Win!")
        else:
            print("\nRock Smashes Scissors! You Lose.")     
   
    elif user_action == "paper":
        
        if computer_action == "rock":
            print("\nPaper Covers Rock! You Win!")
        else:
            print("\nScissors Cut's Paper! You Lose.")     
             
             
    elif user_action == "rock":
        
        if computer_action == "scissors":
            print("\nRock Smashes Scissors! You Win!")
        else:
            print("\nPaper Covers Rock! You Lose.")     
   
    
    again = input("\nYou Play Again (yes/no) : ") 
    
    if again == "no":
        break  
            