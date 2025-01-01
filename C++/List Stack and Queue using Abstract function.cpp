#include<iostream>
using namespace std;

class List
{
   public:
   
   virtual void store () = 0;
   virtual void retrieve () = 0;
};

class Stack : public List
{
   int a[100],n,i;
   public:
   
   void store()
   { 
      cout<<"Enter How Many Elements You Want : ";
      cin>>n;
      
      cout<<"\n\tEnter The Stack Elements : \n";
      
      for(i=0;i<n;i++)
      {
        cout<<"\t\t";
        cin>>a[i];
      }
   }
   
   void retrieve()
   {
     cout<<"\n\tThe Stack Elements are : \n";
     
     for(i=0;i<n;i++)
     {
       cout<<"\t\t"<<a[i]<<endl;
     }
   }
};

class Queue : public List
{
   int a[100],n,i;
   public:
   
   void store()
   { 
      cout<<"\nEnter How Many Elements You Want : ";
      cin>>n;
      
      cout<<"\n\tEnter The Queue Elements : \n";
      
      for(i=0;i<n;i++)
      {
        cout<<"\t\t";
        cin>>a[i];
      }
   }
   
   void retrieve()
   {
     cout<<"\n\tThe Queue Elements are : \n";
     
     for(i=0;i<n;i++)
     {
       cout<<"\t\t"<<a[i]<<endl;
     }
   }
   
}; 

int main()
{
    Stack s;
    Queue q;
    
    s.store();
    s.retrieve();
    
    q.store();
    q.retrieve();
    
    return 0;
}