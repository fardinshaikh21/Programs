#include<iostream>
using namespace std;

class Circle1
{
   public:
   int a;
   float area1;
   
   
   Circle1(int r)
   {
      a = r;
      area1 = 3.14 * r * r ;
   }
   
   friend void Compare(Circle1 c1);
};

class Circle2
{
   public:
   int b;
   float area2;
   
   Circle2(int r)
   {
      b = r;
      area2 = 3.14 * r * r ;
   }
   
   friend void Compare(Circle2 c2);
};

void Compare(Circle1 c1, Circle2 c2)
{
  if(c1.area1 == c2.area2)
  { 
     cout<<"\nArea of Circle1 is : "<<c1.area1<<" & Area of Circle2 is : "<<c2.area2;
     cout<<"\nArea of Both Circles are Equal ";
  }
  else if(c1.area1>c2.area2)
  {
    cout<<"\nArea of Circle1 is : "<<c1.area1<<" & Area of Circle2 is : "<<c2.area2;
    cout<<"\nArea of Circle1 is Greaterthan to Circle2 ";
  }
  else 
  {
    cout<<"\nArea of Circle1 is : "<<c1.area1<<" & Area of Circle2 is : "<<c2.area2;
    cout<<"\nArea of Circle1 is Lessthan to Circle2 ";
  }
}

int main()
{
   int r1,r2;
   
   cout<<"Enter Circle1 Radius : ";
   cin>>r1;
   cout<<"Enter Circle2 Radius : ";
   cin>>r2;
   
   Circle1 c1(r1);
   Circle2 c2(r2);
   
   Compare(r1,r2);
    return 0;
}