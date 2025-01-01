#include<iostream>
using namespace std;

class Employee
{
   string name,designation;
   int id;
   public:
   
   void accept(int id,string name,string designation)
   {
     this->id = id;
     this->name = name;
     this->designation = designation;
   }
   
   void display ()
   {
      cout<<"\n\n\tEmployee Details are \n";
      cout<<"\nEmployee I'd is : "<<id;
      cout<<"\nEmployee Name is : "<<name;
      cout<<"\nEmployee Designation is : "<<designation;
   }
};

int main()
{
   string name,designation;
   int id;
   
   cout<<"\tEnter Employee Details \n\n";
   cout<<"Enter Employee I'd : ";
   cin>>id;
   cout<<"Enter Employee Name : ";
   cin>>name;
   cout<<"Enter Employee Designation : ";
   cin>>designation;
   
   
   Employee e;
   Employee *emp;
   
   emp = &e;
   
   emp->accept(id,name,designation);
   emp->display();
    
   return 0;
}