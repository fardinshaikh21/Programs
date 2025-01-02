#include<iostream>
using namespace std;

class Matrix
{
   int i,j,n[3][3];
   public:
   
   void accept(int i,int j)
   {
     cout<<"Enter Value of "<<i<<" "<<j<<" : ";
     cin>>n[i][j];
   }
   
   void display(int i,int j)
   {
     cout<<n[i][j];
   }
   
   friend void Interchange(Matrix m);
   
};

void Interchange(Matrix m)
{
   int i,j,temp,a,b;
   
   cout<<"\n\nEnter Column Number : ";
   cin>>a;
   cout<<"Enter Column Number You Want Change : ";
   cin>>b;
   
   for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
     {
        temp = m.n[i][a];
        m.n[i][a] = m.n[i][b];
        m.n[i][b] = temp ;
     }
   }
   
   cout<<endl;
   
   for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
        cout<<"\t";
        cout<<m.n[i][j]<<" ";
      }
      cout<<endl;
    }
    cout<<endl;
}
int main()
{
    int i,j;
    Matrix m;
    
    cout<<"\tEnter Matrix Elements : \n\n";
    
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
        m.accept(i,j);
      }
    }
    
    cout<<"\n\n\tMatrix Elements are : \n\n";
    
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
        cout<<"\t";
        m.display(i,j);
        cout<<" ";
      }
      cout<<endl;
    }
    
    Interchange (m);
    
    return 0;
}