#include<iostream>
using namespace std;

class number2;

class number1
{
  // int n1;
     float n1;

  public:

  void accept()
  {
     cout<<"Enter First Number : ";
     cin>>n1;
  } 

   friend float subtract( number1 , number2 );
 
};

class number2
{
  // int n2;
    float n2;

  public:

   void setvalue()
   {
      cout<<"\nEnter Second Number : ";
      cin>>n2;
   }

   friend float subtract(number1 , number2 );
};

float subtract(number1 s1,number2 s2)
{
  /* int sub;

   sub = s1.n1 - s2.n2;

   cout<<"\n\nSubtraction is : "<<sub<<endl;
  */

  return (s1.n1-s2.n2);

}
int main()
{
    number1 x;
    
    x.accept();
    
    number2 y;
    
    y.setvalue();
    
   // subtract(x,y);
    
   cout<<"\n\nSubtraction is : "<<subtract(x,y)<<endl;
    
    return 0;
}