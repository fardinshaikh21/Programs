#include<iostream>
using namespace std;

void fac(int b)
{
  int fac=1,i;

  for(i=1;i<=b;i++) 
  {
      fac=fac*i;
  //  cout<<fac<<endl;
  }
     cout<<fac;
}

void fact(int a)
{
  int fac=1,i=1;

  while(i<=a)
  {
     fac=fac*i;
   // cout<<fac<<endl;
     i++;
  }
    cout<<fac;
}

void facto(int n)
{ 
   int fac=1,i=1;

   do
   {
      fac=fac*i;
    //  cout<<fac<<endl;
    // i++;
    i+=1;
   }while(i<=n);

   cout<<fac;
}



int main()
{
    int n;
    
    cout<<"Enter the Number: ";
    cin>>n;
    
     fac(n);
  //  fact(n);
  //  facto(n);
    
    return 0;
}
