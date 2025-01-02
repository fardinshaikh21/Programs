#include<iostream>
using namespace std;

class Calculator 
{
   int a,b;
   
   public:
   
   void accept()
   {
      cout<<"Enter First Number : ";
      cin>>a;
      cout<<"Enter Second Number : ";
      cin>>b;
   }
   
   void display()
   {
     cout<<"\n\nAddition is : "<<a+b;
     cout<<"\nSubtraction is : "<<a-b;
     cout<<"\nMultiplication is : "<<a*b;
     cout<<"\nDivisiom is : "<<a/b;
     cout<<"\nRemainder is : "<<a%b;
   }
   
};

int main()
{
    //Calculator *c = new Calculator;
    Calculator c;
    
    Calculator *p = &c;
    
    p->accept();
    p->display();
    
    
   /* Calculator *c;
    
    c->accept();
    c->display();
    */
    return 0;
}