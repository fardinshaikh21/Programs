#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream wf("Std.text");
    string msg;
    
    cout<<"Enter Your Name : ";
    cin>>msg;
    
    wf<<"My Name is : "<<msg;
   
    wf.close();
    
    ifstream rf("Std.text");
    string name;
    
    getline(rf,name);
    rf>>name;
    cout<<name;
    
    rf.close();
    return 0;
}