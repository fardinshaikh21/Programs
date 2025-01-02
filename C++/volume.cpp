#include<iostream>
using namespace std;

//int volume(int);
//double volume (double,int);
//long volume (double);

int volume(int s)
{
   return (s*s*s);//(r³)
}

double volume(double r,int h)
{
   return (3.14519*r*r*h);//(3.14*r²h)
}

long vol(double r)
{
  return (4*3.14*r*r*r)/3;//(4/3*3.14*r³)
}
int main()
{
    cout<<volume(5)<<endl;
    cout<<volume(5,8)<<endl;
    cout<<vol(5)<<endl;
    return 0;
}