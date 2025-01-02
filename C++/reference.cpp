#include<iostream>
using namespace std;

void swap(int &a , int &b)
    {
       int t = a;
           a = b;
           b = t;    
    }
    
int main()
{
     int x = 10;
     int y = 20;
    
     cout<<"\tBefore Swaping ";
     cout<<"\nX = "<<x;
     cout<<"\nY = "<<y;
    
      swap(x,y);
    
     cout<<"\n\n\tAfter Swaping ";
     cout<<"\nX = "<<x;
     cout<<"\nY = "<<y;
    
    
    

    
    return 0;
}