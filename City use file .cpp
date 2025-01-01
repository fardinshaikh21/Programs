#include<iostream>
#include<fstream>
using namespace std;

class City
{
   int code;
   string name;
   public:
   
   void accept()
   {
      ofstream wf("Cities.text",ios::app);
      
      cout<<"\nEnter City Name : ";
      cin>>name;
      cout<<"Enter City Code : ";
      cin>>code;
      
      wf<<"\nCity Name is : "<<name;
      wf<<"\nCity Code is : "<<code;
      
      wf.close();
   }
   
   void display()
   {
      ifstream rf("Cities.text");
      string str;
      
      while(rf.eof()==0)
      {
         getline(rf,str);
         cout<<str<<endl;
      }
   }
};

int main()
{
    City c;
    
    c.accept();
    c.display();
    
    return 0;
}