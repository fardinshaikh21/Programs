#include<iostream>
using namespace std;

class Area
{
   int radius;
   float t,pi;
   public:
   
   void accept()
   {
      cout <<"Enter Circle Radius : ";
      cin>>radius;
   }
   
 //  Area (int r,float p = 3.14 )
   Area (float p = 3.14 )
   {
   //  radius = r;
      pi = p;
   }
   
   void cal()
   {
     t = ( pi * radius * radius ) ;
     
     cout <<"\nArea of Circle is : "<<t;
   }
   
};

int main()
{
  /*  int radius;
    
    cout <<"Enter Circle Radius : ";
    cin>>radius;
    
    Area a(radius);
  */ 
   
    Area a;
    
    a.accept();
    a.cal();
    
    return 0;
}