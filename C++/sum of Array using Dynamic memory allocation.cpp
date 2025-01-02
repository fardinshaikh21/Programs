#include<iostream>
using namespace std;

int main()
{
    int i,n,sum=0;
    
    cout<<"\tEnter Array Size : ";
    cin>>n;
    
    int *a = new int[n]; //Dyanamic memory allocate
    
    cout<<"\nEnter Array Elements : ";
    
    for(i=0;i<n;i++)
    { 
      cin>>a[i];
    }
    
    cout<<"\nArray Elements are : \n";
    
    for(i=0;i<n;i++)
    {
      cout<<a[i]<<endl;
      sum += a[i];
    }
    
    cout<<"\nTotal Array Elements Sum is : "<<sum;
    return 0;
}