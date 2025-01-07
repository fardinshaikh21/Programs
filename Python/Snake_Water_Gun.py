import random as rd

Computer = ["Snake","Water","Gun"]

flag = True

while True:
    
    print("\n\t",Computer)
    print("\n------------------------------------\n")
    User_Choice = input("Enter User Choise : ").capitalize()
    Computer_Choice = rd.choice(Computer)
    
    print("\nUser Choise is : ",User_Choice)
    print("Computer Choise is : ",Computer_Choice)
    
    #if User_Choice == "Snake" or User_Choice == "Water" or User_Choice == "Gun":        
    if User_Choice in ["Snake","Water","Gun"]:
        
       if User_Choice == "Snake":             
         
         if Computer_Choice == "Water":
             print("\nSnake Drinks Water You Win!")
         elif Computer_Choice == "Gun":
             print("\nGun Shooted Snake You Lose!")
         else:
             print(f"\nBoth Choices {Computer_Choice} Match is Tie!")                       
       
       elif User_Choice == "Water":         
          
          if Computer_Choice == "Gun":
             print("\nWater Pushed Gun You Win!")
          elif Computer_Choice == "Snake":
             print("\nSnake Drinks Water You Lose!")
          else:
             print(f"\nBoth Choices {Computer_Choice} Match is Tie!")                 
       
       elif User_Choice == "Gun":          
          
          if Computer_Choice == "Snake":
             print("\nGun Shooted Snake You Win!")
          elif Computer_Choice == "Water":
             print("\nWater Pushed Gun You Lose!")
          else:
             print(f"\nBoth Choices {Computer_Choice} Match is Tie!")                       
    else:
      print("\nInvalid choice try again") 
      
    print("\n------------------------------------\n")
    
    again  = input("Play again(Yes/No) : ").capitalize()
    
    if again == "No":
       print("\nGame is Over!") 
       break       
    elif again == "Yes":
        continue
    else:     
       print("\nInvalid choice try again!")   
       
      # while again != "Yes" or again != "No":
       while again not in ["Yes","No"]:
            
         again  = input("\nPlay again(Yes/No) : ").capitalize()
       
         #if again == "Yes" or again == "No":
         if again in ["Yes","No"]:
            break             
       
       if again == "No":
           print("\nGame is Over!")
           break
       
            