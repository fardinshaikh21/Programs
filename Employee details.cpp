#include<iostream>
using namespace std;

class employee
{
  public:

  string name,designation;
  int salary,id;

  void display();

  void accept()
  {
    cout<<"\tEnter the Employee Details :\n";
    cout<<"\n\nEnter Employee Name : ";
    cin>>name;
    cout<<"\nEnter Employee I'd : ";
    cin>>id;
    cout<<"\nEnter Employee Designation : ";
    cin>>designation;
    cout<<"\nEnter Employee Salary : ";
    cin>>salary;
  }

};

void employee :: display()
{
    cout<<"\n\n\tEmployee Details are :\n";
    cout<<"\nEmployee Name is : "<<name;
    cout<<"\nEmployee I'd is : "<<id;
    cout<<"\nEmployee Designation is : "<<designation;
    cout<<"\nEmployee Salary is : "<<salary<<endl;
  
}
int main()
{
    employee e;
    
    e.accept();
    e.display();
    
    return 0;
}