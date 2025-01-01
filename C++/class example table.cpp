#include<iostream>
using namespace std;


class table
{
   int n;

   public:

   void num()
   {
      cout<<"Enter the Number: ";
      cin>>n;
   }

  void t()
   {
      int i;
    
      for(i=1;i<=10;i++)
      {
        printf("%d * %d = %d\n",n,i,n*i);
      }
   }
};

int main()
{
  
   table tb;

   tb.num();
   tb.t();
    
    return 0;
}