#include<iostream>

using namespace std;

class student
{
    int r_number;
    string s_name;
    float percentage;
   
    public:
    
    void accept()
    {
        cout<<"\nEnter roll number: ";
        cin>>r_number;
        cout<<"Enter name: ";
        cin>>s_name;
        cout<<"Enter percentage: ";
        cin>>percentage;
    }
    
    void display()
    {
        cout<<"\nroll no: "<<r_number<<endl;
        cout<<"Name: "<<s_name<<endl;
        cout<<"roll no: "<<percentage<<endl;
        cout<<"Grade: "<<(percentage>90?"A":percentage>80?"B":percentage>70?"C":"D")<<endl<<endl; 
    }
};

int main()
{
    student s[3];
    
    cout<<"\t\t Enter details: \n";
    
    for (int i = 0; i < 3; i++)
    {
        s[i].accept();
    }
    for (int i = 0; i < 3; i++)
    {
        s[i].display();
    }
    
    return 0;
}