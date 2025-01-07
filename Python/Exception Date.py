
class InvalidDate(Exception):
    pass
    
class Date:
    
    def Accept(self):
      try: 
        self.date = int(input("Enter the Date : "))
        self.month = int(input("Enter the Month : "))
        self.year = int(input("Enter the Year : "))
        self.Conditions()
      except ValueError:
          raise InvalidDate("Invalid Date Format! Enter Must Integer")
    
    def Conditions(self):
        
        if (self.month < 1 or self.month > 12 ):
          raise InvalidDate("InvalidMonth! Plz Check Your Month")
       
        elif (self.date < 1):
            raise InvalidDate("Date is Not Less than 1")
        
        elif (self.month in [1,3,5,7,8,10,12] and self.date > 31):
            raise InvalidDate("InvalidDate! Date Must Between 1 to 31")
       
        elif (self.month in [4,6,9,11] and self.date > 30):
            raise InvalidDate("InvalidDate! Date Must Between 1 to 30")
       
        if(self.month == 2 ):
            
                if(self.year % 4 == 0 or self.year % 400 ==0):
                    dd = 29
                else:
                    dd = 28  
                      
                if(self.date > dd):
                     raise InvalidDate("InvalidDate!")
                     
    def Display(self):
        print(f"{self.date}/{self.month}/{self.year}")             
                
d = Date()  

try:
    d.Accept()  
    d.Display() 
except InvalidDate as e:
    print(e) 