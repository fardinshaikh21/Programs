#include<iostream>
using namespace std;

inline void circle()
{
   float r,t;

   cout<<endl<<"Enter the Redius : ";
   cin>>r;

   t = 3.14 * r * r;

   cout<<endl<<"Area of Circle is : "<<t<<endl;
}

inline void square()
{
   float r;

   cout<<endl<<"Enter the Redius : ";
   cin>>r;
   
   cout<<"Area of Square is : "<<r*r<<endl;
}

inline void ractangle()
{
   float l,w;
   
   cout<<endl<<"Enter the Length & Width : ";
   cin>>l>>w;
  
   cout<<"Area of Ractangle is : "<<l*w<<endl;
}
int main()
{
   int n;
 
   while(n!=0)
   {
      cout<<endl<<"0.Exit";
      cout<<endl<<"1.Area of Circle";
      cout<<endl<<"2.Area of Square";
      cout<<endl<<"3.Area of Ractangle";
           
      cout<<endl<<endl<<"Enter Your Choice : ";
      cin>>n;
       

      if(n==1)
      {
         circle();
      }
      else if(n==2)
      {
         square();
      }
      else if(n==3)
      {
        ractangle();
      }
      else
      {
        cout<<endl<<"You Enter Invalid Number you are Exit"<<endl;
      } 
     
   }
   
    return 0;
}