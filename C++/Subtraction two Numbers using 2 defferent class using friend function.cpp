#include<iostream>
using namespace std;

//class Integer2;

class Integer1
{
   public:
   int a;
   
   Integer1(int n)
   {
     a = n;
   }
   
   friend int Subtract(Integer1 i1);
};

class Integer2
{
   public:
   int b;
   Integer2(int m)
   {
      b = m;
   }
   
   friend int Subtract(Integer2 i2);
};

int Subtract(Integer1 i1,Integer2 i2)
{
   return i1.a - i2.b;
}

int main()
{
   int a,b;
   
   cout<<"Enter First Number : ";
   cin>>a;
   cout<<"Enter Second Number : ";
   cin>>b;
   
   Integer1 i1(a);
   Integer2 i2(b);
   
   cout<<"\nSubtraction is "<<a<<" - "<<b<<" = "<<Subtract(a,b);
    
    return 0;
}