#include<iostream>
using namespace std;

class Calculator 
{
   int first, second;
   public:
   
   Calculator(int a ,int b)
   {
      this->first = a;
      this->second = b;
   }
   
   void display ()
   {
     cout<<"Addition is : "<<first+second;
     cout<<"\nSubtraction is : "<<first-second;
     cout<<"\nMultiplication is : "<<first*second;
     cout<<"\nDivision is : "<<first/second;
     cout<<"\nRemainder is : "<<first%second;
   }
};

int main()
{
    Calculator c(20,3);
    c.display();
    
    return 0;
}