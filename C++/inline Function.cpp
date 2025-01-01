#include<iostream>
#define max 10
using namespace std;

inline int table(int a)
{
   int i;

   for(i=1;i<=max;i++)
   {
      cout<<a*i<<endl;
   }
}

inline void fac(int b)
{
   int t,i,fact=1;

   for(i=1;i<=b;i++)
   {
       fact=fact*i;
       cout<<"Factorial is: "<<fact<<endl;
   }
    
   //cout<<"Factorial is: "<<fact;
}

inline void 
int main()
{
    int n;
    
    cout<<"Enter the Number: ";
    cin>>n;
    
   // table(n);
     fac(n);
    return 0;
}