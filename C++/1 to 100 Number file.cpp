#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream wf("Allnumbers.text");
    int i;
    string str;
    
    for(i=1;i<=100;i++)
    {
       wf<<i<<endl;
    }
    
    wf.close();
    
    fstream rf("Allnumbers.text",ios::app);
    rf>>i;
    while(rf.eof()==0)
    {
     // rf>>i;
     // cout<<i<<endl;
     getline(rf,str);
    }
    
    rf.close();
    return 0;
}