#include<iostream>
#define n 5
#define f(a,b) ((a>b)?a:b)
using namespace std;

void table()
{
  int i,r;

  for(i=1;i<=10;i++)
  {
     r=n*i;
     cout<<n<<"*"<<i<<"="<<r<<endl;
  }
}
int main()
{
    int fac=1,i;
    
    for(i=1;i<=n;i++)
    {
      fac=fac*i;
    }
    
    cout<<"Factorial is:"<<fac<<endl;
    
    cout<<f(73,34)<<endl;
    cout<<f(89,314)<<endl;
    cout<<f(7,38)<<endl<<endl;
    
    table();
    
    return 0;
}

