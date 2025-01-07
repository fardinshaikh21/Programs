#!/usr/bin/python3
class Nationality:
    
    def Accept(self):
        self.nationality = input("Enter Your Nationality : ")
        
    def Display(self):
        print("Nationality is : ",self.nationality)  
      
        
class Country(Nationality):
    
    def Accept(self):
        super().Accept()
        self.country = input("Enter Your Country Name : ")
     
    def Display(self):
        super().Display()
        print("Country Name is : ",self.country)
        
        
class State(Country):
    
    def Accept(self):
        super().Accept()
        self.state = input("Enter Your State Name : ")
        
    def Display(self):
        print("\n")
        super().Display() 
        print("State Name is : ",self.state)
  

s = State()    
s.Accept()
s.Display()