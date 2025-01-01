#include<iostream>
using namespace std;

class ract
{
  float l,w;

   public : 

  void accept()
  {
     cout<<"Enter Ractangle length : ";
     cin>>l;
     cout<<"Enter Ractangle Width : ";
     cin>>w;
  }

  void display()
  {
    cout<<"\nArea of Ractangle is : "<<l*w;
  }

  
};

inline float area(float l,float w)
{
   return (l*w);
}

int main()
{   
    float a,b;
    ract r;
    
    r.accept();
    r.display();
    
    cout<<"\n\nEnter Ractangle length : ";
    cin>>a;
    cout<<"Enter Ractangle Width : ";
    cin>>b;
     
    cout<<"\nUsing Inline Area Of Ractangle is : "<<area(a,b);
    
    
    return 0;
}