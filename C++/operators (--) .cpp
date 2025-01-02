#include<iostream>

using namespace std;

class in
{
    int v=10;
    public:
    
    void display()
    {
        cout<<v<<endl;
    }
    void operator--()
    {
        v--;
    }
};

int main()
{
    in obj;
    
    obj.display();
    --obj;
    obj.display();
    --obj;
    obj.display();
    --obj;
    obj.display();
    --obj;
    obj.display();
    
    return 0;
}