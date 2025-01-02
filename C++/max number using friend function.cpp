#include<iostream>
using namespace std;

class c2;
class c3;

class c1
{
   float n1;

   public:

   void accept()
   {
     cout<<"\nEnter First Number : ";
     cin>>n1;
   }

  friend void max(c1 a,c2 b,c3 c);

};

class c2
{
   float n2;

   public:

   void accept()
   {
     cout<<"Enter Second Number : ";
     cin>>n2;
   }

  friend void max(c1 a,c2 b,c3 c);

};

class c3
{
   float n3;

   public:

   void accept()
   {
     cout<<"Enter Third Number : ";
     cin>>n3;
   }
 
     friend void max(c1 a,c2 b,c3 c);
    
};

void max(c1 a,c2 b,c3 c)
{
   if(a.n1>b.n2 && a.n1>c.n3)
   {
      cout<<"\nMax Number is : "<<a.n1;
   }
  else if(b.n2>a.n1 && b.n2>c.n3)
   {
      cout<<"\nMax Number is : "<<b.n2;
   }
  else
  {    
      cout<<"\nMax Number is : "<<c.n3;
  }

}


int main()
{
    c1 x;
    c2 y;
    c3 z;
    
    cout<<"\tEnter the Three Numbers : \n";
    x.accept();
    y.accept();
    z.accept();
  /*  
    cout<<"\n\tthe Three Numbers are: \n";
    x.display();
    y.dislplay();
    z.display();
  */  
    max(x,y,z);
    return 0;
}