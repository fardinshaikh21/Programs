#include<iostream>
using namespace std;
static float tprice=0,tdis;

class Item
{
   public:
   int id;
   string name;
   float price;
   
   void accept ()
   {
      cout<<"\nEnter Item I'd : ";
      cin>>id;
      cout<<"Enter Item Name : ";
      cin>>name;
      cout<<"Enter Item Price : ";
      cin>>price;
   }
   
   void display ()
   {
      cout<<"\n\nItem Id is : "<<id;
      cout<<"\nItem Name is : "<<name;
      cout<<"\nItem Price is : "<<price;
   }
};

class Discount : public Item
{
   public:
   
   void get()
   {
      accept();
      tprice += price ;
   }    
   
   void dis()
   {
     display();
   }
   
   static void total()
   {
     int dis,pay;
     
     cout<<"\n\nEnter Total Item Discount : ";
     cin>>dis;
      
     tdis = tprice * dis / 100;
     pay = tprice - tdis ;
     
     cout<<"\n\nTotal Item Price is : "<<tprice;
     cout<<"\nTotal Item Discount is : "<<tdis;
     cout<<"\nTotal You Pay Money is : "<<pay;
   }
};

int main()
{
    int n,i;
     
    cout<<"How Many Items You Buy : ";
    cin>>n;
    
    Discount d[n];
    
    for(i=0;i<n;i++)
    {
      d[i].get();
    }
    
    for(i=0;i<n;i++)
    {
      d[i].dis();
    }
    
    Discount :: total();
    return 0;
}