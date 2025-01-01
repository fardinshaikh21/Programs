#include<iostream>
using namespace std;

class area2 ;

class area1
{
   int r1;
   public:

   void accept ()
   {
     cout<<"Enter First Circle Radius : ";
     cin>>r1;
   }

   friend void display(area1 a1 , area2 a2);
};

class area2
{
   int r2;
   public:

   void accept ()
   {
     cout<<"Enter Second Circle Radius : ";
     cin>>r2;
   }

   friend void display(area1 a1 , area2 a2);
};

   void display(area1 a1 , area2 a2)
  {
      float c1,c2;
    
      c1 = ( 3.14 * a1.r1 * a1.r1 );   
      cout<<"\n\nFirst Circle Radius is : "<<c1;
     
      c2 = ( 3.14 * a2.r2 * a2.r2 );
      cout<<"\nSecond Circle Radius is : "<<c2;
  
      if(c1==c2)
      {
        cout<<"\n\nCircle1 Radius & Circle2 Radius Are Equal "<<"circle1 = "<<c1<<" & Circle2 = "<<c2;
      }     
      else 
      {
        cout<<"\n\nCircle1 Radius & Circle2 Radius Are Not Equal "<<"circle1 = "<<c1<<" & Circle2 = "<<c2;
      }
  }

int main()
{
    area1 x;
    area2 y;
    
    x.accept();
    y.accept();
    
    display(x,y);
    
    return 0;
}