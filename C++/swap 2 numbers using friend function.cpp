#include<iostream>
using namespace std;

class number2;

class number1
{
   int n1;

   public :

   void accept()
   {
      cout<<"Enter First Number : ";
      cin>>n1;
   }

   void display()
   {
     cout<<"\n\tn1 = "<<n1;
   }

    friend void swap(number1 a, number2 b);
};

class number2
{
   int n2;

   public:

   void accept()
   {
     cout<<"Enter Second Number : ";
     cin>>n2;
   }

   void display ()
   { 
      cout<<"\n\tn2 = "<<n2;
   }

  friend void swap(number1 a, number2 b);

};

void swap(number1 a, number2 b)
{
   int t;

   t=a.n1;
   a.n1=b.n2;
   b.n2=t;

   cout<<"\n\tn1 = "<<a.n1;
   cout<<"\n\tn2 = "<<b.n2;
}
int main()
{
    number1 x;
    number2 y;
    
    x.accept();
    y.accept();
     
    cout<<"\n\n     Before Swaping \n";
    x.display();
    y.display();
    
    
    cout<<"\n\n     After Swaping \n";
    swap(x,y);
    
    return 0;
}