#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    float p,r,t,ch;
    
    cout<<"Enter the principal Amount : ";
    cin>>p;
    cout<<"\nEnter the Interest Rate : ";
    cin>>r;
    cout<<"\nEnter Time period in Years : ";
    cin>>t;
    
    ch = p * pow ( (1 + r / 100),t)-p;
    
    cout<<"\n\nCompound Interest After "<<t<<" Years is : "<<ch<<endl;
    return 0;
}