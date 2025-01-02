#include<iostream>
using namespace std;

class Power
{
   int b,p,i,result=1;
  
   public:

   void accept()
   {
      cout<<"\tEnter the Base : ";
      cin>>b;
      cout<<"\n\tEnter the Power : ";
      cin>>p;
   }

   void display()
   { 
      for(i=1;i<=p;i++)
      {
         result=result*b;
      }
   
     cout<<"\nBase is "<<b<<" his Power is "<<p<<" Result is = "<<result<<endl;
   }
};
int main()
{
    Power p;
    
    p.accept();
    p.display();
    
    return 0;
}