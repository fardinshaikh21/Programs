#include<iostream>
using namespace std;

class student
{
    string name,address;
    int rno;
    public:
    
    void getdata(int srno,string sname, string address);
    
    void display()
    {
      cout << "\nStudent Roll No is : "<<rno;
      cout << "\nStudent Name is : "<<name;
      cout << "\nStudent Address is : "<<address<<endl;
    }
    
};

void student :: getdata(int s_rno,string s_name, string s_address)
{
   rno = s_rno;
   name = s_name;
   address = s_address;
}

int main()
{
    student s;
    
    s.getdata(101,"Fardin","Pune");
    s.display();
    
    s.getdata(102,"Akash","Camp");
    s.display();
    
    return 0;
}