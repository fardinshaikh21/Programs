def sum(a,b,c):
    return a + b + c
    
def Print(xState,yState):
    
    zero = 'X' if xState[0] else ('0' if yState[0] else 0)
    one = 'X' if xState[1] else ('0' if yState[1] else 1)
    two = 'X' if xState[2] else ('0' if yState[2] else 2)
    three = 'X' if xState[3] else ('0' if yState[3] else 3)
    four = 'X' if xState[4] else ('0' if yState[4] else 4)
    five = 'X' if xState[5] else ('0' if yState[5] else 5)
    six = 'X' if xState[6] else ('0' if yState[6] else 6)
    seven = 'X' if xState[7] else ('0' if yState[7] else 7)
    eight = 'X' if xState[8] else ('0' if yState[8] else 8)
    
    
    print(f"\t{zero}  | {one} |  {two}")
    print("\t---|---|---")
    print(f"\t{three}  | {four} |  {five}")
    print("\t---|---|---")
    print(f"\t{six}  | {seven} |  {eight}")
    print("\t---|---|---")
    
def CheckWin(xState,yState):
    
    wins = [[0,1,2],[3,4,5],[6,7,8],[0,3,6],[1,4,7],[2,5,8],[0,4,8],[2,4,6]]
      
    for win in wins:
        
      if(sum(xState[win[0]],xState[win[1]],xState[win[2]]) == 3):
          print("\nX Won the Match")
          return 1
          
      if(sum(yState[win[0]],yState[win[1]],yState[win[2]]) == 3):
          print("\n0 Won the Match")
          return 0
          
    return -1                 
  
print("--------Welcome_to_Tic_Tac_Toe-------\n")    
xState = [0,0,0,0,0,0,0,0,0]    
yState = [0,0,0,0,0,0,0,0,0]  
turn = 1
Print(xState,yState) 
while True:
    
 #Print(xState,yState) 
 
 if turn == 1:
    print("\nX's Chance")
    value = int(input("Enter xState Position : "))
    xState[value] = 1
 else:
    print("\n0's Chance")
    value = int(input("Enter oState Position : "))
    yState[value] = 1
    
 win = CheckWin(xState,yState)
 
 print()
 Print(xState,yState) 
 
 turn = 1 - turn
 if win != -1:
   print("\nMatch Over")  
   break
      
 
 
"""
  if win != -1:
   print("\nMatch Over")  
   again = input("\nYou Play Again yes/no : ")
 
   if again == "no":
      break
"""     
 