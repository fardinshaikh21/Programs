import random as rd
#import Hungman_Stages


Stages = ['''
 +------+
  
    |   |
    
    0   |
    
   /|\  |
   
   / \  |
        
        |
        
==========
''', '''
 +------+
  
    |   |
    
    0   |
    
   /|\  |
   
   /    |
         
        |
   
==========
''', '''
 +------+
  
    |   |
    
    0   |
    
   /|\  |
   
        |
        
        |
        
==========
''', '''
 +------+
  
    |   |
    
    0   |
    
   /|   |
   
        |
         
        |
         
==========
''', '''
 +------+
  
    |   |
    
    0   |
    
    |   |
   
        |
   
        |
        
==========
''', '''
 +------+
  
    |   |
    
    0   |
    
        |
   
        |
        
        |
   
==========
''', '''
 +------+
  
    |   |
    
        |
    
        |
   
        |
        
        |       
   
==========
''' 
]

fruits = ["apple","banana","greaps","mango","orange"]


fruit = rd.choice(fruits)
#print("\t",fruit,"\n")

display = [] 
lives = 6

for i in range(len(fruit)):
    display += '_'
    
print(display,"\n")   

flag = False

while not flag:
    
    Guessed_Letter = input("\nEnter Guess Character : ")
    
    for position in range(len(fruit)):
        
        if fruit[position] == Guessed_Letter:   
            display[position] = Guessed_Letter
            print("\nCorrect Choice")
            
    print("\n",display)
    
    if Guessed_Letter not in fruit:
         lives -= 1
         print(Stages[lives])
         print("\nWrong Answer Your Lives is : ",lives)
         if lives == 0:
            flag = True
            print("\nGame is Over You Lose!")             
            
    if '_' not in display:
        flag = True
        print("\nYou Win")  
        