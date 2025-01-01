#include<iostream>
using namespace std;

class c1
{
   int a,b;
   public:

   void accept ()
   {
     cout<<"Enter First Number : ";
     cin>>a;
     cout<<"Enter Second Number : ";
     cin>>b;
   }

   friend class c2;
};

class c2
{
    public:
    
    void display (c1 c)
    {
      cout<<"Subtraction is "<<c.a<<" - "<<c.b<<" = "<<c.a-c.b;
    }
};


int main()
{
    c1 x;
    c2 y;
    
    x.accept();
    y.display(x);
    
    return 0;
}