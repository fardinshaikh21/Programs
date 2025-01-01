#include<iostream>
using namespace std;

class circle2;

class circle1
{
   float a;

   public:

   void accept()
   {
     cout<<"Enter the Radius Circle1 : ";
     cin>>a;
   }

   float display()
   {
     return ( 3.14*a*a);
   }

  friend void compare(circle1 c1,circle2 c2);

};

class circle2
{
   float b;

   public:

   void accept()
   {
      cout<<"\nEnter the Radius Circle2 : ";
      cin>>b;
   }

   float display()
   {
     return (3.14*b*b);
   }

   friend void compare(circle1 c1,circle2 c2);

};

void compare(circle1 c1 , circle2 c2)
{
   if( c1.a == c2.b )
   {
      cout<<"\n\nArea of Circle1 & Circle2 is Equal";
   }  
   else if(c1.a >= c2.b )
   {
    cout<<"\n\nArea of Circle1 is Greater than of Circle2";
   }
   else
   {
     cout<<"\n\nArea of Circle2 is Greater than of Circle1";
   }
   
}


int main()
{
    circle1 x;
    circle2 y;
     
    x.accept();     
    y.accept(); 
    
    cout<<"\n\nCircle1 Radius is : "<<x.display();
    cout<<"\nCircle2 Radius is : "<<y.display();
    
    compare(x,y);
    cout<<"\n";
    
    return 0;
}