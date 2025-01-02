#include<iostream>
using namespace std;

class Employee
{
   int eno;
   string name;
   public:
   
   void accept ()
   {
      cout<<"Enter Employee No : ";
      cin>>eno;
      cout<<"Enter Employee Name : ";
      cin>>name;
   } 
   
   void display ()
   {
     cout<<"\n\nEmployee No is : "<<eno;
     cout<<"\nEmployee Name is : "<<name;
   }
   
};

class Fulltime : public Employee
{ 
   int d_rate,no_of_days,salary;
   public:
   
   void getsal()
   {
      accept();
      cout<<"Enter Dairy Rate : ";
      cin>>d_rate;
      cout<<"Enter no of days : ";
      cin>>no_of_days;
      salary = d_rate * no_of_days;
   }
   
   void dissal()
   {
     display();
     cout<<"\nDairy Rate is : "<<d_rate;
     cout<<"\nNo_Of_Days is : "<<no_of_days;
     cout<<"\nEmployee Salary is : "<<salary;
   }

};

class Parttime : public Employee
{
   int no_of_hours,rate,salary ;
   public:
   
   void sal()
   {
      cout<<"\n\n";
      accept();
      cout<<"Enter Employee No_Of_Hours Works : ";
      cin>>no_of_hours;
      cout<<"Enter Rate : ";
      cin>>rate;
      
      salary = no_of_hours * rate;
   }
   
   void dis()
   {
      display();
      cout<<"\nEmployee No_of_Hours Works is : "<<no_of_hours;
      cout<<"\nWorks Rate is : "<<rate;
      cout<<"\nEmployee Salary is : "<<salary;
   }
};

int main()
{
    Fulltime f;
    
    f.getsal();
    f.dissal();
    
    Parttime p;
    
    p.sal();
    p.dis();
    
    return 0;
}