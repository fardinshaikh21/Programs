#include<iostream>
using namespace std;

class employee
{
   float salary;

   public:
   
   string name;

   void accept ()
   { 
     cout<<"Enter Employee Name : ";
     cin>>name;
     cout<<"Enter Employee Salary : ";
     cin>>salary;
   } 

   void display()
   {
     cout<<"\nEmployee Name is : "<<name;
     cout<<"\nEmployee Salary is : "<<salary;
   }
};
int main()
{
    employee e;
    
    e.accept();
    e.display();
    
    return 0;
}