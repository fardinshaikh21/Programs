#include<iostream>
using namespace std;

class Car
{
   string car_name,car_colour;
   public:
   
   void accept ()
   {
      cout<<"Enter Car Name : ";
      cin>>car_name;
      cout<<"Enter Car Colour : ";
      cin>>car_colour;
   }
   
   void display ()
   {
      cout<<"\n\nCar Model is : "<<car_name;
      cout<<"\nCar Colour is : "<<car_colour;
   }
};

class Maruti : public Car
{
    string m_model;
    public:
    
    void accept1()
    {
       accept();
       cout<<"Enter Maruti Model : ";
       cin>>m_model;
    }
    
    void display1()
    {
       display();
       cout<<"\nMaruti Model is : "<<m_model;
    }
};

class Maruti800 : public Maruti 
{
    string m8_fuel;
    int m8_price;
    public:
    
    void accept2() 
    {
       accept1();
       cout<<"Enter Maruti800 Price : ";
       cin>>m8_price;
       cout<<"Enter Maruti800 Fuel : ";
       cin>>m8_fuel;
    }
    
    void display2()
    {
       display1();
       cout<<"\nMaruti Price is : "<<m8_price;
       cout<<"\nMaruti Fuel is : "<<m8_fuel;
    }
};

int main()
{
    Maruti800 M;
    
    M.accept2();
    M.display2();
    
    return 0;
}