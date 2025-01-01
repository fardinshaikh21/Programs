#include<iostream>
using namespace std;

class Employee
{
   string name,designation;
   int id;
   public:
   
   void accept(int eid,string ename,string edesignation)
   {
     this->id = eid;
     this->name = ename;
     this->designation = edesignation;
   }
   
   void display ()
   {
      cout<<"\n\nEmployee I'd is : "<<id;
      cout<<"\nEmployee Name is : "<<name;
      cout<<"\nEmployee Designation is : "<<designation;
   }
};

int main()
{
   string name,designation;
   int id;
   
   cout<<"Enter Employee I'd : ";
   cin>>id;
   cout<<"Enter Employee Name : ";
   cin>>name;
   cout<<"Enter Employee Designation : ";
   cin>>designation;
   
   
   Employee e;
   
   e.accept(id,name,designation);
   e.display();
    
   return 0;
}