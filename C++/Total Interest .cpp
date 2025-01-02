#include<iostream>
using namespace std;


inline void iset(float a, float b, float c)
{
    int interset;
    
    interset=(a*b*c)/100;
    
    cout<<"\nTotal Interest is : "<<interset;
}

int main()
{
   int p,r,t;

   cout<<"\nEnter Principal Amount : ";
   cin>>p;
   cout<<"\nEnter the Rate of Interest : ";
   cin>>r;
   cout<<"\nEnter Time of Years : ";
   cin>>t;
  
   iset(p,r,t);

    return 0;
}