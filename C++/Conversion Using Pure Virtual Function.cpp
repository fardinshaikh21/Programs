#include<iostream>
using namespace std;

class Conversion
{
  public:
  float Gram,MiliLiter,Paise;
  
  virtual void Read() = 0 ;
  virtual void Convert() = 0;
  virtual void Display() = 0 ;
 
};

class Weight : public Conversion
{
   float Kilogram;
   public:
   
   void Read()
   {
     cout<<"Enter Kilograms : ";
     cin>>Kilogram;
   }
   
   void Convert()
   {
     Gram = 1000 * Kilogram;
   }
   
   void Display()
   {
     cout<<"Total Grams is : "<<Gram;
   }
};

class Volume : public Conversion
{
   float Liter;
   public:
   
   void Read()
   {
     cout<<"\n\nEnter Liters : ";
     cin>>Liter;
   }
   
   void Convert()
   {
     MiliLiter = 1000 * Liter;
   }
   
   void Display()
   {
     cout<<"Total MiliLiters is : "<<MiliLiter;
   }
};

class Currency : public Conversion
{
   float Rupees;
   public:
   
   void Read()
   {
     cout<<"\n\nEnter Rupees : ";
     cin>>Rupees;
   }
   
   void Convert()
   {
     Paise = 100 * Rupees;
   }
   
   void Display()
   {
     cout<<"Total Paise is : "<<Paise;
   }
};

int main()
{
    Weight w;
    Volume v;
    Currency c;
    
    w.Read();
    w.Convert();
    w.Display();
    
    v.Read();
    v.Convert();
    v.Display();
    
    c.Read();
    c.Convert();
    c.Display();
    
    return 0;
}