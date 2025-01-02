#include<iostream>
using namespace std;

void table(int n)
{ 
   int t,i;

   for(i=1;i<=10;i++)
   {
      // t=n*i;
      //cout<<t<<endl;
    
      cout<<n*i<<endl;
   }
}

void tb(int n)
{
  int i=1,t;

  while(i<=10)
  {
    // t=n*i;
    //  cout<<t<<endl;
     
     cout<<n*i<<endl;
     i++;
  } 
}

void tbl(int n)
{
   int i=1,t;

   do
   {
    //  t=n*i;
    //  cout<<t<<endl;
      
      cout<<n*i<<endl;
    
      i++;
   }while(i<=10);
}
 
 int main()
{
    int n;
    
    cout << "Enter the Number: ";
    cin >> n;
      
     table(n);
     tb(n);
     tbl(n);
    return 0;   
}
   