#include<iostream>
using namespace std;

class person
{
  string name,city,num;

   public:

   void accept()
   {   
     cout<<"\nEnter Person Name : ";
     cin>>name;
     cout<<"Enter Person City : ";
     cin>>city;
     cout<<"Enter Person Phone Number : ";
     cin>>num;
   }

   void display()
   {
      
      cout<<"\nPerson Name is : "<<name<<endl;
      cout<<"Person City is : "<<city<<endl;
      cout<<"Person Phone Number is : "<<num<<endl;
   }

   void search(string s)
   {
      if(s==name)
      {
        cout<<"Mobile Number is : "<<num;
      }
   }

   void srch(string s)
   {
      if(s==name)
      {
        display();
      }
   }
};

int main()
{
    person p[100];

    int n,i;
    string r,naam;
    
    cout<<"Enter Number you Want Person Details : ";
    cin>>n;
    cout<<"\n\tEnter the Person Details\n ";
  
    for(i=0;i<n;i++)
   {
      p[i].accept();
   }

   cout<<"\n\tThe Person Details are \n";

   for(i=0;i<n;i++)
   {
      p[i].display();
   }

   cout<<"\n\n\tSearch Person Mobile Number\n";
   cout<<"\nEnter the Person Name : ";
   cin>>r;

   for(i=0;i<n;i++)
   {
     p[i].search(r);
   }

   cout<<"\n\n\tSearch Person Datails \n";
   cout<<"\nEnter the Person Name : ";
   cin>>naam;
    
   for(i=0;i<n;i++)
   {
     p[i].srch(naam);
   }

   return 0;
}