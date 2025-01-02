#include<iostream>
using namespace std;

int main()
{
    enum week
    {
       Mon,Tues,Weds,Thurs,Fri,Sat,Sun
    };
    
    cout<<Weds<<endl;//2
    cout<<Mon<<endl;//0
    cout<<Fri<<endl;//4
    cout<<Sun<<endl;//6
    cout<<Sat<<endl;//5
    
    week str=Fri;
    cout<<str;//4
      
    return 0;
}