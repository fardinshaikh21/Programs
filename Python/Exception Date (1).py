class InvalidDateException(Exception):
    pass
    
class ddmmyy:
    
    def Accept(self):
         try: 
             self.date = int(input("Enter the Date : "))
             self.month = int(input("Enter the Month : "))
             self.year = int(input("Enter the Year :  "))
             self.Operations() 
         except ValueError:
             raise InvalidDateException("Invalid Date")

    def Operations(self):
          
          if(self.month < 1 or self.month>12):
              raise InvalidDateException("Invalid Month")
              
          elif(self.date < 1):
              raise InvalidDateException("Date Not be Less Than 1")
          
          elif(self.month in [1,3,5,7,8,10,12] and self.date > 31):
              raise InvalidDateException("Invalid Date")  
              
          elif(self.month in [4,6,9,11] and self.date > 30):
              raise InvalidDateException("Invalid Date")  
              
          elif(self.month == 2):      
              if(self.year%4==0 or self.year%400==0):
                  max = 29
              else:
                  max = 28    
              if(self.date > max):
                 raise InvalidDateException("Invalid Date") 
                 
        
    def Display(self):
        print(f"{self.date}/{self.month}/{self.year}")
        
        
d = ddmmyy()

try:
    d.Accept()
    d.Display()
except InvalidDateException as e:
    print(e)   
        
        