#include<iostream>
using namespace std;
static float total;

class Item
{
   int id;
   string name;
   float price;
   public:
   
   void accept()
   { 
     cout<<"\nEnter Item I'd : ";
     cin>>id;
     cout<<"Enter Item Name : ";
     cin>>name;
     cout<<"Enter Item Price : ";
     cin>>price;
     total += price;
   }
   
   void display()
   {
     cout<<"\n\nItem I'd is : "<<id;
     cout<<"\nItem Name is : "<<name;
     cout<<"\nItem Price is : "<<price;
   }
   
};

class Discount : public Item
{
  float dis,discount ;
  public:
  
  void total1()
  {
     discount = 100 * 0.20;
     dis = total - discount ;
     cout<<"\n\nTotal Price is : "<<total;
     cout<<"\nTotal Discount is : "<<dis;
  }
  
};

int main()
{
    int n,i;
    
    cout<<"Enter How Many Items You Want : ";
    cin>>n;
    
    Item itm[n];
    
    cout<<"\n\tEnter Item Details : \n";
    
    for(i=0;i<n;i++)
    {
      itm[i].accept();
    }
    
    cout<<"\n\tItem Details are : \n";
    
     for(i=0;i<n;i++)
    {
      itm[i].display();
    }
    
    Discount d;
    
    d.total1();
    
    return 0;
}