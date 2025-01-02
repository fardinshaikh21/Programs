#include<iostream>
using namespace std;

class Sort
{
   int a[100],i,j,t,n;

   public:

   void accept()
   {
      cout<<"Enter How Many Numbers You Want : ";
      cin>>n;
      cout<<"\n\tEnter the Numbers\n\n";
      
       for(i=0;i<n;i++)
        {
          cout<<"\t\t";
          cin>>a[i];
        }
        
      cout<<"\n\tNumbers Are Desending order\n\n";
   
      for(i=0;i<n;i++)
      {
        cout<<"\t\t"<<a[i]<<endl;
      }
   }
 
   void assending()
   {
      for(i=0;i<n;i++)
      {
        for(j=0;j<n-i-1;j++)
        {
           if(a[j]>=a[j+1])
           {
              t=a[j];
              a[j]=a[j+1];
              a[j+1]=t;
           }
        }
      }
    
      cout<<"\n\tNumbers Are Assending order\n\n";
   
      for(i=0;i<n;i++)
      {
        cout<<"\t\t"<<a[i]<<endl;
      }
   }
};
int main()
{
    Sort s;
    
    s.accept();
    s.assending();
    
    
    return 0;
}