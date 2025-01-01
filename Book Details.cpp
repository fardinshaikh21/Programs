#include<iostream>
using namespace std;

class Book
{
   string name,author;
   float price;

   public:

   void accept()
   {
     cout<<"\nEnter Book Name : ";
     cin>>name;
     cout<<"Enter Author Name : ";
     cin>>author;
     cout<<"Enter Book Price Name : ";
     cin>>price;
   }

   void display()
   {
     cout<<"\n\nBook Name is : "<<name<<endl;
     cout<<"Author Name is : "<<author<<endl;
     cout<<"Book Price is : "<<price;
   }

  void search(string s)
  {
    if(s==author)
    {
      cout<<endl<<author<<" This Author Written Book Names is: "<<name<<endl;
    }
  }

  void srch(string r)
  {
    if(r==name)
    {
      cout<<endl<<name<<" This book Price is : "<<price<<endl;
    }
  }
   

};

int main()
{
    Book b[100];
    int n,i;
    string a,bok;
    
    
    cout<<"Enter the Number you Want Books Datails : ";
    cin>>n;
    
    cout<<"\n\tEnter the Books Details \n";
   
    for(i=0;i<n;i++)
    {
       b[i].accept();
    }
   
    cout<<"\n\n\tBook Details are ";
    
     for(i=0;i<n;i++)
    {
       b[i].display();
    }
   
    cout<<"\n\nEnter the Author Name : ";
    cin>>a;
    
      for(i=0;i<n;i++)
    {
       b[i].search(a);
    }
    
    cout<<"\n\nEnter the Book Name : ";
    cin>>bok;
    
      for(i=0;i<n;i++)
    {
       b[i].srch(bok);
    }
    
    
    return 0;
}