#include<iostream>
using namespace std;

class interest
{
   public: 

  inline void simple(float a, float b, float c)
  {
    int interset;
    
    interset=(a*b*c)/100;
    
    cout<<"\nTotal Interest is : "<<interset;
  }

 inline void compound(float a, float b, float c, float d)
 {
    int f,s;
    
    f=a*(1+b/c)*c*d;
    
    s = f-a;
    
    cout<<"\n\nTotal Compound Interest is : "<<s;
 }

};

int main()
{
   interest i;

   int p,r,t,n;

   cout<<"\nEnter Principal Amount : ";
   cin>>p;
   cout<<"\nEnter the Rate of Interest : ";
   cin>>r;
   cout<<"\nEnter Time of Years : ";
   cin>>t;
   cout<<"\nEnter How Many time year : ";
   cin>>n;

   
  i.simple(p,r,t);

  i.compound(p,t,r,n);


    return 0;
}