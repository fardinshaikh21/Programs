#include<iostream>
using namespace std;

class Conversation
{
   public:
   float kg,rp,lt;
   
   void acckg()
   {
      cout<<"Enter Kilograms : ";
      cin>>kg;
   }
   
   void vol()
   {
     cout<<"\n\nEnter Liter : ";
     cin>>lt;
   }
   
   void ru()
   {
      cout<<"\n\nEnter Rupees : ";
      cin>>rp;
   }
   
   
};

class Weight : public Conversation 
{
   public:
   
   void dis1()
   {
     float gm;
     
     acckg();
     gm = kg * 1000 ;
     
     cout<<"Total Gram is : "<<gm;
   }
};

class Volume : public Conversation 
{
   public:
   
   void dis2()
   { 
      float ml;
      vol();
      ml = lt * 1000 ;
      cout<<"Total Mililiter is : "<<ml;
   }
};

class Currency : public Conversation 
{
   public:
    
   void dis3()
   {
      float ps;
      ru();
      ps = rp * 100 ;
      cout<<"Total Paise is : "<<ps;
   }
};

int main()
{
    Weight w;
    Volume v;
    Currency c;
    
    w.dis1();
    v.dis2();
    c.dis3();
    
    return 0;
}