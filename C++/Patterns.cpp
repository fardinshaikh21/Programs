#include<iostream>
using namespace std;

void p1(int n)
{
   int i,j;

   for(i=1;i<=n;i++)//1 2
   {
     for(j=1;j<=i;j++)//j=1 1<=1 2<=2
     {
       cout<<j;   //1 
     }              
      cout<<endl;
   }
}
/*
    i=1 j=1 j<=i 1<=1 print 1 then j++ j=2
    j<=i  2<=1 no not print 2 goto newline
    i++ i=2 j<=i 1<=2 yes print 1 j++ j=2
    j<=i 2<=2 yes print 2 then j=3 3<=2 no
    not print 3 goto newline

  1 
  12 
  123
  1234
  12345
*/

void p2(int a)
{
   int i,j;

   for(i=a;i>=1;i--)
   {
     for(j=1;j<=i;j++)
     {
       cout<<j;
     }
      cout<<endl;
   }
}
   /*
     12345
     1234
     123
     12
     1
   */
void p3(int b)
{
   int i,j;

   for(i=b;i>=1;i--)
   {
     for(j=b;j>=i;j--)
     {
       cout<<j;  
     }
       cout<<endl;
   }
}
/*
     5
     54
     543
     5432
     54321
*/
void p4(int b)
{
   int i,j;

   for(i=1;i<=b;i++)
   {
     for(j=b;j>=i;j--)
     {
       cout<<j;  
     }
       cout<<endl;
   }
}
/*
    54321
    5432
    543
    54
    5
*/
void p5(int f)
{
  int i,j;

  for(i=1;i<=f;i++)
  {
     for(j=f;j>=1;j--)
     {
        if(j>i)
       {
         cout<<" ";
       }
       else
       {
         cout<<j;
       }
     }
       cout<<"\n";
  }
}
/*
         1
        21
       321
      4321
     54321
*/
void p6(int s)
{
   int i,j;

   for(i=s;i>=1;i--)
   {
      for(j=1;j<=s;j++)
      {
         if(j<i)
         {
            cout<<" ";
         }
         else
         {
            cout<<j;
         }
      }
         cout<<"\n";
   }
}
/*     5
      45
     345
    2345
   12345
*/
void p7(int r)
{
   int i,j;

   for(i=1;i<=r;i++)
   {
      for(j=1;j<=r;j++)
      {
         if(j<i)
         {
            cout<<" ";
         }
         else
         {
            cout<<j;
         }
      }
         cout<<"\n";
   }
}
/*
          12345
           2345
            345
             45
              5
*/

int main()
{
    int n,i,j;
    
    cout<<"Enter the Number: ";
    cin>>n;
      
  // p1(n)
  // p2(n);
  // p3(n);
  // p4(n);
  // p5(n);
  // p6(n)
  // p7(n);
   
   return 0;
}