#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int i;
    ifstream rf("AllNumbers.text");
    
    while(rf.eof()==0)
    {
      rf>>i;
      
      if(i%2==0)
      {
        ofstream ef("Even.text",ios::app);
        ef<<i<<endl;
        ef.close();
      }
      else
      {
        ofstream of("Odd.text",ios::app);
        of<<i<<endl;
        of.close();
      }
    }
    
    rf.close();
    
    return 0;
}