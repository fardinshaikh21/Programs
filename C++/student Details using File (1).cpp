#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream wf("Student.text");
    
    int rno;
    string name;
    float m1,m2,m3,total,per;
    
    cout<<"Enter Student Roll no : ";
    cin>>rno;
    cout<<"Enter Student Name : ";
    cin>>name;
    cout<<"Enter Student Subject 1 Marks : ";
    cin>>m1;
    cout<<"Enter Student Subject 2 Marks : ";
    cin>>m2;
    cout<<"Enter Student Subject 3 Marks : ";
    cin>>m3;
    
    total = m1 + m2 + m3;
    per = total / 3;
    
    wf<<rno<<name<<total<<per;
    
    ifstream rf("Student.text");
    
    rf>>rno>>name>>total>>per;
    
    cout<<"\n\nStudent Roll No is : "<<rno;
    cout<<"\nStudent Name is : "<<name;
    cout<<"\nStudent Total Marks is : "<<total;
    cout<<"\nStudent Percentage is : "<<per;
    
    
    return 0;
}