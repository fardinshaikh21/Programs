#include<iostream>
#include<fstream>
using namespace std;

class Student 
{
   string str,address,sname,contact;
   int rno;
   public:
   
   void accept ()
   {
     cout<<"Enter Student Roll Number : ";
     cin>>rno;
     cout<<"Enter Student Name : ";
     cin>>sname;
     cout<<"Enter Student Address : ";
     cin>>address;
     cout<<"Enter Student Contact Number : ";
     cin>>contact;
     
     ofstream wf("studentlist.text",ios::app);
     
     cout<<"\n\tStudent Details are :  ";
     wf<<"\n\nStudent Roll Number is : "<<rno;
     wf<<"\nStudent Name is : "<<sname;
     wf<<"\nStudent Address is : "<<address;
     wf<<"\nStudent Contact Number is : "<<contact;
     
     wf.close();
   }
   
   void display()
   {
      ifstream rf("studentlist.text");
      
      while(rf.eof()==0)
      {
         getline(rf,str);
         cout<<str<<endl;
      }
   }
};


int main()
{
   Student s;
   
   s.accept();
   s.display();
   
    return 0;
}