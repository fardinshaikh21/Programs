import random as rd

Choice = ["Snake","Water","Gun"]

while True:
    
    print("\n-------------------------------------")
    print("Choices :",Choice)
    print("-------------------------------------") 
    
    User_Action = input("\nEnter Your Choice : ").capitalize()
    
    if User_Action == "Snake" or User_Action == "Water" or User_Action == "Gun":
        
        Computer_Action = rd.choice(Choice)
        
        print("\nUser Choice is : ",User_Action)
        print("Computer Choice is : ",Computer_Action)
        
        if User_Action == "Snake":
            
              if Computer_Action == "Snake":
                    print(f"\nBoth Players are Choices {User_Action} Match is Draw")
              elif Computer_Action == "Water":
                  print("\nSnake Drink Water You Win")
              else:
                  print("\nGun Shooted Snake You Loss") 
                  
        elif User_Action == "Water":
            
              if Computer_Action == "Water":
                    print(f"\nBoth Players are Choices {User_Action} Match is Draw")
              elif Computer_Action == "Gun":
                  print("\nWater Pushed Gun You Win")
              else:
                  print("\nSnake Drink Water You Loss") 
                  
        elif User_Action == "Gun":
            
              if Computer_Action == "Gun":
                    print(f"\nBoth Players are Choices {User_Action} Match is Draw")
              elif Computer_Action == "Snake":
                  print("\nGun Shooted Snake You Win")
              else:
                  print("\nWater Pushed Gun You Loss") 
                  
    else:
       print("\nUser Enter Invalid Choice Check it ")        
                       
    
    again = input("\n\nYou Want to Play Again(yes or no) : ")
    
    if again == "no":
        print("\nMatch is Over Thank You for Playing!")
        break
    else:
        continue        