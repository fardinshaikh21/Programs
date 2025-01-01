#include<iostream>
using namespace std;

class sub
{
  int a,b;
  public:

  void accept ()
  {
     cout<<"Enter Two Numbers : ";
     cin>>a>>b;
  }

 friend void subtract (sub s1);

};

void subtract (sub s1)
{
   cout<<"Subtraction "<<s1.a<<" - "<<s1.b<<" = "<<s1.a-s1.b;
}


int main()
{
   sub s2;

  s2.accept();
  subtract(s2);
    
    return 0;
}