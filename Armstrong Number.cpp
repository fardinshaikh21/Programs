#include<iostream>
using namespace std;

class arm
{
   public:

   int n,t,r,sum;

  void accept()
  {
    cout<<"Enter Any Number : ";
    cin>>n;
    
    t=n;
    
  }

   void display()
  {
    sum=0;
    
    while(n>0)
    {
       r=n%10;
       sum=sum+(r*r*r);
       n=n/10;
    }
    
    if(sum==t)
    {
      cout<<"\nThis Number is Armstrong ";
    }
    else
    {
       cout<<"\nThis Number is Not Armstrong ";
    }
  }

};

int main()
{
    arm a;
    
    a.accept();
    a.display();
    
    return 0;
}