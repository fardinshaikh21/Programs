#include<iostream>
using namespace std;

class power
{
   public:

   double pow(double m, int n)
   {
     int i,sum=1;
    
     for(i=1;i<=n;i++)
     {
       sum = sum * m;
     }
    
      return sum;
   }

  int pow(int m,int n)
  {
    int i,sum=1;
    
    for(i=1;i<=n;i++)
    {
      sum = sum * m;
    }
    
    return sum;
  }

};
int main()
{
    power p;
    int a,b;
    
    cout<<"Enter the Base : ";
    cin>>a;
    cout<<"Enter the Power : ";
    cin>>b;
    
    cout<<"\nBase is : "<<a<<" Power is : "<<b<<" = "<<p.pow(a,b)<<endl;
    cout<<"Base is : "<<a<<" Power is : "<<b<<" = "<<p.pow(a,b);
    return 0;
}