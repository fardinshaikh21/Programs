#include<iostream>
using namespace std;

class List
{
   protected:
   
   virtual void store() = 0;
   virtual void retrieve() = 0;
};

class Stack : public List
{
  int n;
  public:
  
   void store()
   {
      cout<<"\t\t : ";
      cin>>n;
   }
   
   void retrieve()
   {
     cout<<"\n\t\t : "<<n;
   }
   
};

class Queue : public List
{
    int n;
    public:
  
   void store()
   {
      cout<<"\t\t : ";
      cin>>n;
   }
   
   void retrieve()
   {
     cout<<"\n\t\t : "<<n;
   }
};

int main()
{
   int n,i;
   
   cout<<"Enter how many Stack Elements : ";
   cin>>n;
   cout<<endl;
   
   Stack s[n];
   
  cout<<"\n\tEnter Stack Elements : "<<endl<<endl;
   
   for(i=0;i<n;i++)
   {
     s[i].store();
   }
   
   cout<<"\n\tStack Elements are : \n";
   
   for(i=0;i<n;i++)
   {
     s[i].retrieve();
   }
   
   int m,j;
   
   cout<<"\n\nEnter how many Queue Elements : ";
   cin>>m;
   cout<<endl;
   Queue q[m];
   cout<<"\n\tEnter Queue Elements : "<<endl<<endl;
   
   for(j=0;j<m;j++)
   {
     q[j].store();
   }
   
   cout<<"\n\tQueue Elements are : \n";
   
   for(j=0;j<m;j++)
   {
     q[j].retrieve();
   }
    return 0;
}