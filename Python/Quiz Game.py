print("\tWelcome to Quiz Game")
print("-------------------------------------")
 
print("\n\t\t\\(°_°)")
print("\t\t  ) )z")
print("\t\t  / \\")
user = input("\nYou Want Play ? yes/no : ")
correct_ans = 0
wrong_ans = 0

if user == "yes":
    
    print("\n1. RAM stand For : ")
    answer = input("")
    if answer == "Random Access Memory":
        print("\nCorrect Answer")
        correct_ans += 1
    else:
        print("\nWrong Amswer")   
        wrong_ans += 1
        
    print("\n2. ROM stand For : ")
    answer = input("")
    if answer == "Read Only Memory":
        print("\nCorrect Answer")
        correct_ans += 1
    else:
        print("\nWrong Amswer")  
        wrong_ans += 1        
        
    print("\n3. CPU stand For : ")
    answer = input("")
    if answer == "Central Processing Unit":
        print("\nCorrect Answer")
        correct_ans += 1
    else:
        print("\nWrong Answer")
        wrong_ans += 1   
        
    print("\nTotal Quetions is : 3")
    print("Total Correct Answer is : ",correct_ans) 
    print("Total Wrong Answer is : ",wrong_ans)    
        
else:
  print("\nGame is Over")   
      
