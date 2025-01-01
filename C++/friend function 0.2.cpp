#include<iostream>
using namespace std;


class student
{
   string name;
   int rno;

   public: 

   void accept()
   {
     cout<<"Enter Student Name : ";
     cin>>name;
     cout<<"Enter Student Roll No : ";
     cin>>rno;
   }

   friend void display(student s);
};

void display(student s)
{
   cout<<"\n\nStudent Name is : "<<s.name;
   cout<<"\nStudent Roll No is : "<<s.rno;
} 


int main()
{
    student s1;
    
    s1.accept();
    display(s1);
    
    return 0;
}