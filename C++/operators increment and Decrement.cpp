#include<iostream>
using namespace std;

class Increment
{
    int n;
    public :
    
    void accept()
    {
      cout<<"Enter the Number : ";
      cin>>n;
    }
    
    void operator++()
    {
       cout<<n<<endl;
       n++;
     //  cout<<n<<endl;
    }
    
    void operator--()
    {
       cout<<n<<endl;
       n--;
    }
};


int main()
{
    Increment i;
    
    i.accept();
    i.operator++();
    i.operator++();
    i.operator++();
    i.operator++();
    
   
    i.accept();
    i.operator--();
    i.operator--();
    i.operator--();
    i.operator--();
    i.operator--();
    
    return 0;
}