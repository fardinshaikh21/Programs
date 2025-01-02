#include<iostream>
using namespace std;

double power(double m,int n)
{
  int i=1,sum=1;
  
  while(i<=n)
  {
     sum *= m;
     i++;
  }
  
  return sum;
}

int power (int m,int n)
{
  int i=1,sum=1;
  
  while(i<=n)
  {
     sum *= m;
     i++;
  }
  
  return sum;
} 

int main()
{
    double c;
    int a,b;
    
    cout<<"Enter the Base : ";
    cin>>c;
    
    cout<<"Enter the Base : ";
    cin>>a;
    
    cout<<"Enter the Power : ";
    cin>>b;
    
   cout<<"\n\nBase is : "<<c<<" And Power is : "<<b<<" = "<<power(c,b);
   cout<<"\nBase is : "<<a<<" And Power is : "<<b<<" = "<<power(a,b);
    
    return 0;
}