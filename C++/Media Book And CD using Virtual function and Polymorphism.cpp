#include<iostream>
using namespace std;

class Media
{
   protected:
   int m_id;
   string m_title;
   public:
   
   virtual void display() = 0;
   
};

class Book : public Media
{
   int b_isbm;
   public:
   
   Book(int id,string title,int isbm)
   {
       this->m_id = id;
       this->m_title = title;
       this->b_isbm = isbm;
   }
   
   void display()
   {
      cout<<"\n\n\tMedia I'd is : "<<this->m_id;
      cout<<"\n\tMedia Title is : "<<this->m_title;
      cout<<"\n\tBook ISBM Code is : "<<this->b_isbm;
   }
};

class CD : public Media
{
   string cd_data;
   int cd_capacity;
   public:
   
   CD(int id, string title, string data,int capacity)
   {
      this->m_id = id;
      this->m_title = title;
      this->cd_data = data;
      this->cd_capacity = capacity;
   }
   
   void display()
   {
     cout<<"\n\n\tMedia I'd is : "<<this->m_id;
     cout<<"\n\tMedia Title is : "<<this->m_title;
     cout<<"\n\tCD Data is : "<<this->cd_data;
     cout<<"\n\tCD Capacity is : "<<this->cd_capacity;
   }
};

int main()
{
   Media **m;
   int isbm,capacity,id,n,i;
   string title,data;
   char ch;
   
   cout<<"Enter How Media Details You Want : ";
   cin>>n;
   
   m = new Media *[n];
   
    for(i=0;i<n;i++)
    {
       cout<<"\nEnter Type Book for B/b & CD for C/c : ";
       cin>>ch;
       
       if(ch=='B' || ch=='b') 
       {
         cout<<"\n\tEnter Media I'd : ";
         cin>>id;
         cout<<"\tEnter Media Title : ";
         cin>>title;
         cout<<"\tEnter Book ISBM Code : ";
         cin>>isbm;
         m[i]= new Book(id,title,isbm);
       }
       else if(ch=='C' || ch=='c') 
       { 
         cout<<"\n\tEnter Media I'd : ";
         cin>>id;
         cout<<"\tEnter Media Title : ";
         cin>>title;
         cout<<"\tEnter CD data : ";
         cin>>data;
         cout<<"\tEnter CD Capicity : ";
         cin>>capacity;
         m[i]= new CD(id,title,data,capacity);
       }
       else
       {
         cout<<"\nInvalid Character Try Again ";
       } 
       
    }
    
    cout<<"\n\n\tMedia Details are : ";
    
    for(i=0;i<n;i++)
    {
      m[i]->display();
      cout<<"\n\n\t**************************";
    }
   
    return 0;
}