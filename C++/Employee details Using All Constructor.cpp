#include<iostream>
using namespace std;

class Employee 
{
   int e_no;
   string e_name,e_designation;
   float e_salary;
   public:
   
   Employee()
   {
    cout<<"Enter Employee No : ";
    cin>>e_no;
    cout<<"Enter Employee Name : ";
    cin>>e_name;
    cout<<"Enter Employee Designation : ";
    cin>>e_designation;
    cout<<"Enter Employee Salary : ";
    cin>>e_salary;
   }
   
   Employee(int no,string name,string desi,float salary)
   {
      this->e_no = no;
      this->e_name = name;
      this->e_designation = desi;
      this->e_salary = salary;
   }
   
   Employee(Employee &e)
   {
     e_no = e.e_no;
     e_name = e.e_name;
     e_designation = e.e_designation;
     e_salary = e.e_salary;
   }
   
   void display()
   {
     cout<<"\n\nEmployee No is : "<<this->e_no;
     cout<<"\nEmployee Name is : "<<this->e_name;
     cout<<"\nEmployee Designation is : "<<this->e_designation;
     cout<<"\nEmployee Salary is : "<<this->e_salary;
   }
   
};

int main()
{
    Employee e1;
    e1.display();
    cout<<"\n\n\tDefault Constructer \n";
    int no ;
    string name,desig;
    float salary;
    
 /*   cout<<"Enter Employee No : ";
    cin>>no;
    cout<<"Enter Employee Name : ";
    cin>>name;
    cout<<"Enter Employee Designation : ";
    cin>>desig;
    cout<<"Enter Employee Salary : ";
    cin>>salary;
    Employee e2(no,name,desig,salary);*/
    
    Employee e2(102,"Akash","Worker",20000);
    e2.display();
    cout<<"\n\n\t Parameterized Constructer \n";
    
    
    Employee e3(e1);
    e3.display();
    cout<<"\n\n\t Copy Constructer \n";
    
    
    
    return 0;
}