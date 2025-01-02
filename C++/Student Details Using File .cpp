#include<iostream>
#include<fstream>
using namespace std;

class Student
{
   int s_rno;
   string s_name;
   float s_percentage;
   public:
   
   void accept()
   {
     cout<<"Enter Student Roll No : ";
     cin>>s_rno;
     cout<<"Enter Student Name : ";
     cin>>s_name;
     cout<<"Enter Student Percentage : ";
     cin>>s_percentage;
     
     ofstream wf("Student.text",ios::app);
     
     wf<<"\n\nStudent Roll No is : "<<s_rno;
     wf<<"\nStudent Name is : "<<s_name;
     wf<<"\nStudent Percentage is : "<<s_percentage;
   
      wf.close();
   }
   
   void display()
   {
      ifstream rf("Student.text");
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
    Student s;
    
    s.accept();
    s.display();
    
    return 0;
}