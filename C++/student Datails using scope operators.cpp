#include<iostream>
using namespace std;

class student
{
   public:

   string name;
   int m1,m2,m3,total;
   float per;

    void accept();
    void result();
    void display();
};

void student :: accept()
{
  cout<<"Enter the Student Name : ";
  cin>>name;
  cout<<"\nEnter First Subject Marks : ";
  cin>>m1;
  cout<<"\nEnter Second Subject Marks : ";
  cin>>m2;
  cout<<"\nEnter Third Subject Marks : ";
  cin>>m3;
}

void student :: result ()
{
    total = ( m1 + m2 + m3);

    per = ( total / 3);
    
  /*   if(per>=90 && per<=100)
    {
      cout<<"\nGrade is A";
    }
    else if(per>=70 && per<=89)
    {
      cout<<"\nGrade is B";
    }
    else if(per>=60 && per<=69)
    { 
      cout<<"\nGrade is C";
    }
    else if(per>=35 && per<=59)
    {
      cout<<"\nGrade is Pass";
    }
    else
    {
      cout<<"\nGrade is Fail";
    }
    
  */
    
}

void student :: display()
{
   cout<<"\n\nStudent Name is : "<<name;
   cout<<"\nFirst Subject Marks is : "<<m1;
   cout<<"\nSecond Subject Marks is : "<<m2;
   cout<<"\nThird Subject Marks is : "<<m3;
   cout<<"\nStudent Total Marks is : "<<total;
   cout<<"\nStudent Percentage is : "<<per;
 
      if(per>=90 && per<=100)
    {
      cout<<"\nStudent Grade is : A";
    }
    else if(per>=70 && per<=89)
    {
      cout<<"\nStudent Grade is : B";
    }
    else if(per>=60 && per<=69)
    { 
      cout<<"\nStudent Grade is : C";
    }
    else if(per>=35 && per<=59)
    {
      cout<<"\nStudent Grade is : Pass";
    }
    else
    {
      cout<<"\nStident Grade is : Fail";
    }

}

int main()
{
    student s;
    
    s.accept();
    s.result();
    s.display();
    
    return 0;
}