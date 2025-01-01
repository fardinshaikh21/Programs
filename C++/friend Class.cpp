#include<iostream>
using namespace std;

class second ;

class first 
{
  int x,y;

  public:

   
  void accept()
  {
    cout<<"Enter First Number : ";
    cin>>x;
    cout<<"Enter Second Number : ";
    cin>>y;     
  }

   friend class second;
};

class second 
{
  public:

   void display(first f)
   {
     cout<<"Subtraction "<<f.x<<" - "<<f.y<<" = "<<f.x - f.y;
   }
};


int main()
{
   first f1;
   second s1;

   f1.accept();
   s1.display(f1);

    return 0;
}