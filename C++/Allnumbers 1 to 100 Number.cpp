#include<iostream>
#include<fstream>
using namespace std;

class Number
{
   int i;
   public:
   
   void accept()
   {
     ofstream wf("Allnumbers.text",ios::app);
   
     for(i=1;i<=100;i++)
     {
       wf<<i<<endl;
     }
     
     wf.close();
   }
   
   void display ()
   {
      ifstream rf("Allnumbers.text");
      string str;
      
      while(rf.eof()==0)
      {
         getline(rf,str);
         cout<<str<<endl;
      }
      
      rf.close();
   }
};


int main()
{
    Number n;
    
    n.accept();
    n.display();
    
    return 0;
}