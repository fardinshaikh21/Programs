#include<iostream>
using namespace std;

double Power(double m,int n)
{ 
   int p=1;
   
   while(n!=0)
   {
      p *= m;
      n--;
   }
   return p;
}

int Power(int m,int n)
{
   int p=1;
   
   while(n!=0)
   {
     p *= m;
     n--;
   }
   return p;
}

int main()
{
    double b;
    int p,m,n;
    
    cout<<"Enter The Base  : ";
    cin>>b;
    cout<<"Enter Power : ";
    cin>>p;
    
    cout<<"\nBase is "<<b<<" Power is "<<p<<" = "<<Power(b,p);
    
    cout<<"\n\nEnter The Base  : ";
    cin>>m;
    cout<<"Enter Power : ";
    cin>>n;
    
    cout<<"\nBase is "<<m<<" Power is "<<n<<" = "<<Power(m,n);
    
    return 0;
}