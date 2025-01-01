#include<iostream>

using namespace std;

class c2;

class c1
{
    int v=10;
    
    friend void substract(c1 o1,c2 o2);
};

class c2
{
    int v=5;
    
    friend void substract(c1 o1,c2 o2);
};

void substract(c1 o1,c2 o2)
{
    cout<<o1.v-o2.v;
}

int main()
{
    c1 o1;
    c2 o2;
    
    substract(o1,o2);
    
    return 0;
}