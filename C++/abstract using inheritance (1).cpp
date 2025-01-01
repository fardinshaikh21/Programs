#include<iostream>
using namespace std;

class Cal
{
   public:
   int a,b;
   
   void accept()
   {
     cout<<"Enter First Number : ";
     cin>>a;
     cout<<"Enter Second Number : ";
     cin>>b;
   }
   
   virtual void add() = 0;
 //  virtual void sub() = 0;
   
};

class Adition : public Cal
{
  public:
  
   void add()
   {
     // accept();
      cout<<"Addition is : "<<a+b;
   }
};

/*class Subtraction : public Cal
{
   public:
  
   void sub()
   {
       accept();
     // return a-b ;
      cout<<"Subtraction is : "<<a-b;
   }
};
*/
int main()
{
    Adition a;
   // Subtraction s;
    Cal *c;
    
    c = &a;
   // a.accept();
  //  a.add();
  // cout<<"\nSubtraction is : "<<s.sub();
    c->accept();
    c->add();
    return 0;
}