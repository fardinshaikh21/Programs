#include<iostream>
using namespace std;

int main()
{
    int n,i,j,sum=0,prevsum=0;
    
    cout << "Enter the value of N : ";
    cin>>n;
    
    for(i=1;i<=n;i+=2)
    {
       prevsum +=i;
       sum += prevsum;
       cout << "(";
       
       for(j=1;j<=i;j+=2)
       {
          if(j!=1)
          {
             cout << "+";
          }
             cout <<j;
       }
       
          if(i != n)
          {
             cout<<")";
          }
          
          cout <<"+";
       
    }
    
    cout << "\nsum is : " <<sum<< endl;
    return 0;
}