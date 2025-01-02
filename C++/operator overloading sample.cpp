#include<iostream>
using namespace std;

class Increment
{
   int value;
   public:
   
   Increment()
   {
     value = 10;
   }
   
   Increment(int n)
   {
     value = n;
   }
   
   void operator ++()
   {
        ++value;
    //  --value;
    //  value += 10;
    //  value -= 10;
    //  value *= 10;
    //  value /= 5;
    //  value %= 3;
   }
   
   void display()
   {
      cout<<value<<endl;
   }
   
};

int main()
{
    Increment i;
     
    i.display();
    
    Increment i1(30);
    
    
    for(int j=1;j<=5;j++)
    {
      ++i1;
      i1.display();
    }
    
    return 0;
}