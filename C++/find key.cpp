#include<iostream>
using namespace std;

class found
{
   public:

   int a[100],n,key,i;

   void accept()
   {
      cout<<"\tHow Many Numbers You Want : ";
      cin>>n;
      cout<<"\n\tEnter the Numbers : \n";
       
      for(i=0;i<n;i++)
      {   
         cout<<"\t\t";     
         cin>>a[i];
      }

   }
   
   void display()
   {
    cout<<"\n\tYou Enter Numbers Are:\n";
    
      for(i=0;i<n;i++)
      {
         cout<<"\t\t"<<a[i]<<endl;
      }
    
      cout<<"\n\n\n\tEnter Key You Want Found : ";
      cin>>key;
    
     for(i=0;i<n;i++)
     {
       if(key==a[i])
       {
         cout<<"\n\tKey is Found his index is : "<<i<<endl;
       }
      
     }


   }
};

int main()
{
    found f;
    
    f.accept();
    f.display();
    
    return 0;
}