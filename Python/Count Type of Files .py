import os

txt = 0 
html = 0
css = 0
 
for i in os.listdir():
   #print(i)   
   
   if(i.endswith(".txt")):
       #print("\n\tTotal Text files is :\n")
       print(i)
       txt += 1
   elif(i.endswith(".html")):
       #print("\n\tTotal HTML files is :\n")
       print(i)
       html += 1  
   elif(i.endswith(".css")):
      # print("\n\tTotal Css files is :\n")
       print(i)
       css += 1      
       
       
print("Total Text File is : ",txt) 
print("Total Html File is : ",html) 
print("Total Css File is : ",css) 