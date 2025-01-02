#include<iostream>
using namespace std;

class item
{
   string name;
   int code,j;
   static int count;
   public:
   
   void accept ()
   {
      cout <<"\nEnter Product Name : ";
      cin>>name;
      cout<<"Enter Product Code : ";
      cin>>code;
   }
   
   static int countno()
   {
    count++;
    return count;
   }
   
   void display()
   {
    cout<<"\n\nProduct Name is : "<<name;
    cout<<"\nProduct Code is : "<<code;
    cout<<"\nProduct Number is : "<<countno();
   }
   
};

int item :: count ;

int main()
{
   item i[100];
   int n,j;
   
   cout<<"How Many Details You want : ";
   cin>>n;
   
   for(j=0;j<n;j++)
  {
    i[j].accept();
  }
  
  for(j=0;j<n;j++)
  {
    i[j].display();
  }
 
    return 0;
}