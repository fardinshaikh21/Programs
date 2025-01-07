def Reverse(str):
    
    if(len(str)==0):
      return str
    else:
       return Reverse(str[1:]) + str[0]    

print(Reverse("Fardin"))