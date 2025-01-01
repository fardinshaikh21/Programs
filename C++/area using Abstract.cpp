#include<iostream>
using namespace std;

class Shape
{
   public:
   float height,length,breadth,radius;
   
   void circle()
   {
     cout<<"Enter Circle Radius : ";
     cin>>radius;
   }
   
   void rectangle()
   {
     cout<<"\n\nEnter Ractangle Length : ";
     cin>>length;
     cout<<"Enter Ractangle breadth : ";
     cin>>breadth;
   }
   
   void trapezoid()
   {
     cout<<"\n\nEnter First Trapezoid Side : ";
     cin>>length;
     cout<<"Enter Second Trapezoid Side : ";
     cin>>breadth;
     cout<<"Enter Trapezoid Height : ";
     cin>>height;
   }
   
   virtual void area() = 0;
   
};

class  Circle : public Shape
{
   float total;
   public:
   
   void area()
   { 
     circle();
     
     total = 3.14 * radius * radius ;
     
     cout <<"\nTotal Circle Area is : "<<total;
   }
};

class Rectangle : public Shape
{
   float total;
   public:
   
   void area()
   {
      rectangle();
      
      total = length * breadth;
      
      cout<<"\nTotal Rectangle Area is : "<<total;
   }
};

class Trapezoid : public Shape
{
   float total;
   public:
   
   void area()
   {
      trapezoid();
      
      total = length + breadth * height / 2;
      
      cout<<"\nTotal Trapezoid Area is : "<<total;
   }
};

int main()
{
    Circle c;
    Rectangle r;
    Trapezoid t;
    
    c.area();
    r.area();
    t.area();
    
    return 0;
}