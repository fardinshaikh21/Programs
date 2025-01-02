#include<iostream>
using namespace std;

class item
{
   string des;
   int code;
   static int count;
   public:
   
   void accept ()
   {
      cout << "Enter Description : ";
      cin>>des;
      cout<<"Enter Code : ";
      cin>>code;
   }
   
   static int countno()
   {
      count++;
    //  cout<<count<<endl;
    return count;
   }
   
   void display()
   {
    cout<<"\nDescription is : "<<des;
    cout<<"\nCode is "<<code;
   }
   
};

int item :: count ;

int main()
{
   item i;
   
   i.accept();
   i.display();
   cout<<"\nItem no is : "<<i.countno();
    return 0;
}