#include<iostream>
using namespace std;

class worker
{
   string name;
   int hours;
   float pay_r;

   public:

   void accept()
   {
     cout<<"\nEnter Worker Name : ";
     cin>>name;
     cout<<"Enter No_of_Hours Worked : ";
     cin>>hours;
     cout<<"Enter Worker Payment Rs : ";
     cin>>pay_r;
   }

   float cal()
   {
     float salary;
    
     return ( salary = hours * pay_r );
   }
 
   void display()
   {
     cout<<"\n\nWorker Name is : "<<name;
     cout<<"\nNo_of_Hours Worked is : "<<hours;
     cout<<"\nWorker Payment Rate is : "<<pay_r;
     cout<<"\nWorker Salary is : "<<cal();
   }

};

int main()
{
    worker w[5];
    int i;
    
    cout<<"\tEnter the Workers Details \n";
    
    for(i=0;i<5;i++)
    { 
      w[i].accept();
    }
    
    cout<<"\n\tWorker Details are \n";
    
    for(i=0;i<5;i++)
    { 
      w[i].display();
    }
    
    
   
  //  cout<<"\nWorker Salary is : "<<w.cal();
    
    
    return 0;
}