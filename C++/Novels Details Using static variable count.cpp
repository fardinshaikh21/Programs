#include<iostream>
using namespace std;

class Novel
{
   int id;
   string name,author;
   public:
   static int count;
   
   void accept()
   {
      cout<<"\nEnter Novel I'd : ";
      cin>>id;
      cout<<"Enter Novel Name : ";
      cin>>name;
      cout<<"Enter Novel Author : ";
      cin>>author;
   }
   
   void display()
   {
     cout<<"\n\nNovel I'd is : "<<id;
     cout<<"\nNovel Name is : "<<name;
     cout<<"\nNovel Author is : "<<author;
     cout<<"\nNovel Number is : "<<count1();
   }
   
   static int count1()
   {
      count++;
      return count;
   }
   
};

int Novel :: count;

int main()
{
    int i,a;
    static int count;
    
    cout<<"How Many Novel You Want : ";
    cin>>a;
    
    Novel n[a];
    
    cout<<"\n\tEnter Novel Details : \n";
    
    for(i=0;i<a;i++)
    {
      n[i].accept();
    }
    
    cout<<"\n\tNovel Details are : ";
    
    for(i=0;i<a;i++)
    {
      n[i].display();
      count++;
    }
    
   cout<<"\n\n\tTotal Novels are : "<<count;
    
    return 0;
}