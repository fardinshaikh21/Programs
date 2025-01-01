#include<iostream>
using namespace std;

class Student
{
   int rno;
   string name,address;
   public:
   
   Student()
   {
     cout<<"Enter Student Roll no : ";
     cin>>rno;
     cout<<"Enter Student Name : ";
     cin>>name;
     cout<<"Enter Student Address : ";
     cin>>address;
   }
   
   Student(int Marks1,int Marks2)
   {
      cout<<"\nMarks1 is : "<<Marks1;
      cout<<"\nMarks2 is : "<<Marks2;
   }
   
    void display()
   {
     cout<<"\nStudent Roll no is : "<<rno;
     cout<<"\nStudent Name is : "<<name;
     cout<<"\nStudent Address is : "<<address;
   }
   
};

class Fardin : public Student
{
   public: 
   
    Fardin ()
    {
      display();
    }
};


int main()
{
   Fardin f;
   Student(10,20);
    return 0;
}