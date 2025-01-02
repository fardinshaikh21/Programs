#include<iostream>
using namespace std;

class base 
{
   public:
   
   void show()
   {
     cout<<"This Base Class";
   }
};

class Derived : public base
{ 
  public:
  
   void show()
   {
     cout<<"\nThis is Derived Class";
   }
};

int main()
{
    base *b;
    Derived d;
    
    b = &d;
    
    b->show();
    
    //d.show();

    return 0;
}