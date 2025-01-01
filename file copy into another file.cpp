#include<iostream>
#include<fstream>
using namespace std;

class abc
{
   string str;
   public:
   
   void accept()
   {
     ofstream wf("ABC.text",ios::app);
     cout<<"Enter Something : ";
     cin>>str;
     wf<<str<<endl;
     wf.close();
     
     ifstream rf("ABC.text");
     
     while(rf.eof()==0)
     {
       getline(rf,str);
       ofstream wf1("XYZ.text",ios::app);
       wf1<<str<<endl;
       wf1.close();
     }
     
     rf.close();
   }
   
   void display()
   {
      ifstream rf1("XYZ.text");
      
      while(rf1.eof()==0)
      { 
        getline(rf1,str);
        cout<<str<<endl;
      }
      rf1.close();
   }
};

int main()
{
    abc a;
    
    a.accept();
    a.display();
    
    return 0;
}