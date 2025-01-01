#include<iostream>
using namespace std;

void sum(int n)
{
   int s=0,r,i;

   for(i=1;i<=n;i++)
   {
      r=n%10;
      s=s+r;
      n=n/10;
   }
     cout<<"The given Number of Sum is: "<<s;
}

void sm(int b)
{
  int s=0,r;

  while(b>0)
  {
     r=b%10;
     s=s+r;
     b=b/10;
  }
   cout<<"The given Number of Sum is: "<<s;
}

void sam(int c)
{
   int s=0,r;

  do
  {
     r=c%10;
     s=s+r;
     c=c/10;
  }while(c!=0);

 cout<<"The given Number of Sum is: "<<s;
}

int main()
{
    int n;
    
    cout<<"Enter the Number: ";
    cin>>n;
    
  //  sum(n);
  //   sm(n);
      sam(n);
    return 0;
    
}