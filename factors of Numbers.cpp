#include<iostream>
using namespace std;

class fact
{
   int n;

   public :

   void accept()
  {
     cout<<"Enter the Number: ";
     cin>>n;
  }

  void display()
  {
     int i;
    
     for(i=1;i<=n/2;i++)
     {
        if(n%i==0)
        {
           cout<<i<<endl;
        }
     }   
  }
};

int main()
{
    fact f;
    
    f.accept();
    f.display();
    
    return 0;
}