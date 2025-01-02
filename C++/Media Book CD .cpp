#include<iostream>
using namespace std;

class Media
{
   int m_id;
   string m_name,m_address;
   public:
   
   void accept ()
   {
     cout<<"\n\nEnter Media I'd : ";
     cin>>m_id;
     cout<<"Enter Media Name : ";
     cin>>m_name;
     cout<<"Enter Media Address : ";
     cin>>m_address;
   }
   
   void display ()
   {
     cout<<"\n\nMedia I'd is : "<<m_id;
     cout<<"\nMedia Name is : "<<m_name;
     cout<<"\nMedia Address is : "<<m_address;
   }
};

class Book : public Media
{
   int b_id;
   string b_name,b_publication,b_author;
   float b_price;
   public:
   
   void accept1()
   {
     accept();
     cout<<"Enter Book I'd : ";
     cin>>b_id;
     cout<<"Enter Book Name : ";
     cin>>b_name;
     cout<<"Enter Book Publication Name : ";
     cin>>b_publication;
     cout<<"Enter Book Author Name : ";
     cin>>b_author;
     cout<<"Enter Book Price : ";
     cin>>b_price;
   }
   
   void display1()
   {
      display();
      cout<<"\nBook I'd is : "<<b_id;
      cout<<"\nBook Name is : "<<b_name;
      cout<<"\nBook Publication Name is : "<<b_publication;
      cout<<"\nBook Author Name is : "<<b_author;
      cout<<"\nBook Price is : "<<b_price;
   }
};

class CD : public Media 
{
   string cd_title;
   float cd_price;
   public:
   
   void accept2()
   {
      accept();
      cout<<"Enter CD title : ";
      cin>>cd_title;
      cout<<"Enter CD price : ";
      cin>>cd_price;
   }
   
   void display2()
   {
      display();
      cout<<"\nCD I'd is : "<<cd_title;
      cout<<"\nCD Price is : "<<cd_price;
   }
};


int main()
{
    Book b;
    
    b.accept1();
    b.display1();
    
    CD cd;
    
    cd.accept2();
    cd.display2();
    
    return 0;
}