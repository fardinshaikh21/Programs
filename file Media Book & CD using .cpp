#include<iostream>
using namespace std;

class Media
{
   protected:
   string title;
   int id;
   public:
   
   virtual void display()
   {
     cout<<"Base Class";
   }
};

class Book : public Media
{
   int isbm;
   public :
   
   Book(int a,string b,int isbm)
   {
      id = a;
      title = b;
      this->isbm = isbm;
   }
   
   void display()
   {
     cout<<"\nMedia ID is : "<<id;
     cout<<"\nMedia Title is : "<<title;
     cout<<"\nBook ISBM code is : "<<isbm<<endl;
   }
   
};

class CD : public Media
{
   int capacity;
   public:
   
   CD(int a, string b,int capacity)
   {
     id = a;
     title = b;
     this->capacity = capacity;
   }
   
   void display()
   {
     cout<<"\nMedia ID is : "<<id;
     cout<<"\nMedia Title is : "<<title;
     cout<<"\nBook Capacity is : "<<capacity<<endl;
   }
   
};

int main()
{
    string title;
    int n,i,id,isbm,capacity;
    char ch;
    
    
    
    cout<<"How Many Media Details You Want : ";
    cin>>n;
    
    Media **m;
    
    m = new Media *[n];
    
    for(i=0;i<n;i++)
    {
       cout<<"\nEnter Book for(B/b) & CD for(C/c) : ";
       cin>>ch;
       
       if(ch=='B' || ch=='b')
       {
         cout<<"\n\nEnter Media ID : ";
         cin>>id;
         cout<<"Enter Media Title : ";
         cin>>title;
         cout<<"Enter Book ISBM code : ";
         cin>>isbm;
         m[i] = new Book(id,title,isbm);
       }
       
       else if(ch=='C' || ch=='c')
       {
         cout<<"\n\nEnter Media ID : ";
         cin>>id;
     	cout<<"Enter Media Title : ";
     	cin>>title;
     	cout<<"Enter CD Capicity : ";
   	  cin>>capacity;
         m[i] = new CD(id,title,capacity);
       }
       else
       {
         cout<<"Invalid Character";
       }
       
    }
    
      cout<<"\n********************************";
    
    for(i=0;i<n;i++)
    {
      m[i]->display();
      cout<<"\n*******************************\n";
    }
    
    return 0;
}