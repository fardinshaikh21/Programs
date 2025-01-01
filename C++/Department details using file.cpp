#include<iostream>
#include<fstream>
using namespace std;

class Department
{
   int d_id,no_of_staff;
   string d_name,HOD;
   public:
   
   void accept ()
   {
      cout<<"\nEnter Department I'd : ";
      cin>>d_id;
      cout<<"Enter Department Name : ";
      cin>>d_name;
      cout<<"Enter Department HOD Name : ";
      cin>>HOD;
      cout<<"Enter Department no_of_Staff : ";
      cin>>no_of_staff;
      
      ofstream wf("Dept.text",ios::app);
     
      wf<<"\n\nDepartment I'd is : "<<d_id;
      wf<<"\nDepartment Name is : "<<d_name;
      wf<<"\nDepartment HOD Name is : "<<HOD;
      wf<<"\nDepartment no_of Staff is : "<<no_of_staff;
      
      wf.close();
   }
   
   void display()
   {
     ifstream rf("Dept.text");
     string str;
     
     while(rf.eof()==0)
     {
        getline(rf,str);
        cout<<str<<endl;
     }
     rf.close();
   }
};

int main()
{
    int n,i;
    
    cout<<"Enter How Many Department Details you Want : ";
    cin>>n;
    
    Department d[n];
    
    cout<<"\n\tEnter Department Details : \n";
    
    for(i=0;i<n;i++)
    {
      d[i].accept();
    }
    
    cout<<"\n\tDepartment Details are : \n";
  
    d[i].display();
    
    return 0;
}