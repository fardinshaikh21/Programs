#include<iostream>
using namespace std;

class seconds
{
   int h,m,s,t;

  public:

  void display()
  {
  
   cout<<"Enter This Format (HH:MM:SS) : ";
   cin>>h>>m>>s;
  
   t=((h*60*60)+(m*60)+s);  

   cout<<"Total Seconds are : "<<t;
  }
};
int main()
{
   /* int h,m,s,total;
    
   cout<<"Enter this Format (HH:MM:SS) : "; 
    cin>>h>>m>>s;
    
    total=((h*60*60)+(m*60)+s);
    
    cout<<"Total Seconds are : "<<total; */
    
    seconds s;
 
    s.display();
    
    return 0;
}