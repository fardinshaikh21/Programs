#include<iostream>
using namespace std;

void num(int a,int b)
{
   int i;

   for(i=a;i<=b;i++)
   {
      if(i%2==0)
      {
        cout<<i<<endl;
      }
  
   }
} 

int main()
{
    int m,n;
    
    cout<<"Enter two Numbers: ";
    cin>>m>>n;
    
    num(m,n);
    
    return 0;
}