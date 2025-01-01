#include<iostream>
using namespace std;

class number
{
   int a,b;
   public:

   number()
  {
     a = 10;
     b = 20;
  }

  number (int m,int n)
  {
    a = m;
    b = n;
  } 

 number(number &obj1 , number &obj2)
 {
    a = obj1.a;
    b = obj1.b;
 }

  void display ()
  {
    cout<<"Addition is "<<a+b<<endl;
  }

};

int main()
{
    number n1;
    n1.display(); // Default 
    
    number n2(40,50); // parameterize 
    n2.display();
    
    number n3(25,75); // Copy
  //number n3(n2);
    n3.display();
    
    return 0;
}