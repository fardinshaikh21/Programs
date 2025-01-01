#include<iostream>
#include<fstream>
using namespace std;
 
class number
{
   int i;
   string str1,str2;
   public:
   
 /*  void accept()
   {
      ofstream wf("number.text",ios::app);
      
      for(i=1;i<=100;i++)
      { 
        wf<<i<<endl;
      }
      
      wf.close();
      
      ifstream rf("number.text");
      
      while(rf.eof()==0)
      {
        getline(rf,str);
        cout<<str<<endl;
      }
      
      rf.close();
   }*/
   
   void accept1()
   {
     ifstream rf("number.text");
     
     while(rf.eof()==0)
     {
        rf>>i;
        
        if(i%2==0)
        {
           ofstream wf1("even.text",ios::app);
           wf1<<i<<endl;
           wf1.close();
        }
        else
        {
           ofstream wf2("odd.text",ios::app);
           wf2<<i<<endl;
           wf2.close();
        }
     }
   }
   
   void display()
   {
       ifstream rf1("even.text");
       cout<<"\tEven Numbers are : \n";
       while(rf1.eof()==0)
       {
          getline(rf1,str1);
          cout<<str1<<endl;
       }
       rf1.close();
       
       ifstream rf2("odd.text");
       
       cout<<"\n\tOdd Numbers are : \n";
       
       while(rf2.eof()==0)
       {
          getline(rf2,str2);
          cout<<str2<<endl;
       }
       rf2.close();
   }
};

int main()
{
    number n;
    n.accept1();
    n.display();
    
    return 0;
}