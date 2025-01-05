def Freq(str):
    dic={}
    
    for i in range(len(str)):
        
      key = str[i]
      
      if(key in dic):       
         dic[key] += 1
      else:
         dic[key] = 1
         
    print(dic)   
    
str = input("Enter the String : ")
Freq(str)         
       
           