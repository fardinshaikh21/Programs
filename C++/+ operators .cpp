#include<iostream>

using namespace std;

class in
{
    int v=10;
    public:
    void display(){
        cout<<v<<endl;
    }
    void operator+(in obj2)
    {
        v= v+obj2.v;
    }
};

int main()
{
    in obj,obj2;
    
    obj.display(); //10
   
    obj+obj2;
    
    obj.display(); //20
    
    obj2.display();
    return 0;
}