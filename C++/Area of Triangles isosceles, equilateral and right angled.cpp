#include<iostream>
using namespace std;

float Area(int a,int b)
{
   return  a * b / 2;
}

float Area(float b ,float h)
{
   return b * h / 2;
}

double Area(int a)
{
  return 1.732 * a * a / 4;
}

int main()
{
    float m,n;
    
    cout<<"Enter Right Angled Triangle Side A : ";
    cin>>m;
    cout<<"Enter Right Angled Triangle Height B : ";
    cin>>n;
    
    cout<<"\nArea of Right Angled Triangle is : "<<Area(m,n);
    
    float b,h;
    
    cout<<"\n\nEnter Isosceles Triangle Side b : ";
    cin>>b;
    cout<<"Enter Isosceles Triangle Height h : ";
    cin>>h;
    
    cout<<"\nArea of Isosceles Triangle is : "<<Area(b,h);
    
    double a;
    
    cout<<"\n\nEnter Equilateral Triangle Side : ";
    cin>>a;
    
    cout<<"\nArea of Equilateral Triangle is : "<<Area(a);
    
    return 0;
}