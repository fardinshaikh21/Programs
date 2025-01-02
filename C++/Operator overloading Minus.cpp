#include<iostream>
using namespace std;

class Minus
{
    int x,y,z;
    public:
    
    Minus(int a,int b,int c)
    {
       x = a;
       y = b;
       z = c;
    }
    
    void display()
    {
      cout<<"x = "<<x<<endl;
      cout<<"y = "<<y<<endl;
      cout<<"z = "<<z<<endl;
    }
    
    void operator --()
    {
       x = -x;
       y = -y;
       z = -z;
    }
    
};

int main()
{
    Minus m(20,30,40);
    
    m.display();
    
    --m;
    m.display();
    
    return 0;
}