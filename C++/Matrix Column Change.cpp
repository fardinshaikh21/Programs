#include<iostream>
using namespace std;

class Matrix
{
   int n[3][3],i,j;
   public:
   
   void accept ()
   {
     cout<<"Enter Matrix Elements : \n";
     
      for(i=0;i<3;i++)
      {
        for(j=0;j<3;j++)
        {
          cin>>n[i][j];
        }
      } 
   }
   
   void display ()
   {
     cout<<"\nMatrix Elements Are : \n";
     
      for(i=0;i<3;i++)
      {
        for(j=0;j<3;j++)
        {
          cout<<n[i][j]<<" ";
        }
         cout<<endl;
      } 
   }
   
   friend void interchange(Matrix m);
   
};

void interchange(Matrix m)
{
    int a,b,t;
    
    cout<<"\nEnter Columns index you Changed : ";
    cin>>a>>b;
    
    for(m.i=0;m.i<3;m.i++)
    { 
          t     = m.n[m.i][a];
      m.n[m.i][a] = m.n[m.i][b];
      m.n[m.i][b] = t;
    }
    
    for(m.i=0;m.i<3;m.i++)
    {
       m.display();
    }
}

int main()
{
    Matrix m;
    
    m.accept();
    m.display();
    interchange(m);
    
    return 0;
}