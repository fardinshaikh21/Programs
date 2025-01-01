#include<iostream>
using namespace std;

class sample
{
   int a,b;

   public:

   void getdata()
   {
      a=20;
      b=35;
   }

  friend float mean(sample s);
};

float mean(sample s)
{
   return float(s.a+s.b)/2.0;
}


int main()
{
    sample x;
    
    x.getdata();
   
    cout <<"Mean Value is : "<<mean(x);
    return 0;
}