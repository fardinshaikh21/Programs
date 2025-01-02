#include<iostream>
using namespace std;

class worker
{
   public:
   string name;
   int no_of_hours,pay_rate;

   void accept()
   {
     cout<<"\nEnter Worker Name : ";
     cin>>name;
     cout<<"Workers How Many Hours Works : ";
     cin>>no_of_hours;
   }

   int cal(int pay_rate = 500)
   {
     return (no_of_hours * pay_rate) ;
   }

   void display()
   {
     cout<<"\n\nWorker Name is : "<<name;
     cout<<"\nWorkers no_of_hours Works is : "<<no_of_hours;
     cout<<"\nWorker Salary is : "<<cal();
   }

};


int main()
{
    worker w[100];
    int n,i;
    
    cout<<"How Many Workers Details you want : ";
    cin>>n;
    
    cout<<"\n\tEnter Workers Details : \n";
   
     for(i=0;i<n;i++)
    {
      w[i].accept();
    }
    
    cout<<"\n\tWorkers Details are : \n";
  
    for(i=0;i<n;i++)
    {
      w[i].display();
    }
    
    
    return 0;
}