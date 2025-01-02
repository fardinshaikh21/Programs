#include<iostream>
using namespace std;

class Integer
{
   int n;
   public:
   
   Integer(int a)
   {
      n = a;
   }
   
   void operator-()
   {
      n -= 5 ;
   }
   
   /*void operator+()
   {
      n += 5 ;
   }*/
   
   void display()
   {
     cout<<"\nNumber is : "<<n;
   }
};

int main()
{
    int n;
    
    cout<<"Enter Any Number : ";
    cin>>n;
    
    Integer i(n);
    i.display();
    cout<<"\n\tAfter Decrement : ";
    -i;
    i.display();
    cout<<"\n\tAfter Decrement : ";
    -i;
    i.display();
    cout<<"\n\tAfter Decrement : ";
    -i;
    i.display();
    cout<<"\n\tAfter Decrement : ";
    -i;
    i.display();
    
    
   /* cout<<"\n\tAfter Increment : ";
    +i;
    i.display();
    cout<<"\n\tAfter Increment : ";
    +i;
    i.display();
    cout<<"\n\tAfter Increment : ";
    +i;
    i.display();
    cout<<"\n\tAfter Increment : ";
    +i;
    i.display();*/
    
    return 0;
}