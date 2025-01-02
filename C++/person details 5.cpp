#include<iostream>

using namespace std;

class person{
    string name;
    string city;
    string mobile;
    public:
    void accept(){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter city: ";
        cin>>city;
        cout<<"Enter Mobile no: ";
        cin>>mobile;
    }
    void display(){
        cout<<"NAME: "<<name<<endl;
        cout<<"CITY: "<<city<<endl;
        cout<<"MOBILE NO: "<<mobile<<endl;
    }
    void search(string n){
        if(!name.compare(n)){
            display();
        }
    }
};

int main()
{
    int z=5;
    person p[z];
    string n;
    cout<<"Enter details"<<endl;
    for (int i = 0; i < z; i++)
    {
        p[i].accept();
    }
    cout<<"\n\nDetails:"<<endl;
    for (int i = 0; i < z; i++)
    {
        p[i].display();
    }
    cout<<"\n\nSEARCH:\n"<<endl;
    cout<<"enter Name to search: ";
    cin>>n;
    for (int i = 0; i < z; i++)
    {
        p[i].search(n);
    }
    return 0;
}   