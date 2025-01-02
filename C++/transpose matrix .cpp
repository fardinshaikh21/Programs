#include<iostream>
using namespace std;

class matrix
{
  int n[100][100],r,c,i,j;
  public:
  
  
  
  void accept()
  {
      cout<<"Enter How Many Rows you want : ";
      cin>>r;
      cout<<"\nEnter How Many Columns you want : ";
      cin>>c;
  
     cout<<"\nEnter Matrix Elements :\n";
     
     for(i=0;i<r;i++)
     {
        for(j=0;j<c;j++)
        {
           cin>>n[i][j];
        }
     }
  }
  
   void display()
  {
     cout<<"\nMatrix Elements are :\n";
     
     for(i=0;i<r;i++)
     {
        for(j=0;j<c;j++)
        {
           cout<<n[i][j]<<" ";
        }
           cout<<endl;
     }
  }
  
  void transpose()
  {
     int a,b,t;
     
     cout<<"\n\nEnter Change Row : ";
     cin>>a;
     cout<<"\nEnter Change Column : ";
     cin>>b;
     
     cout << "\nTranspose Matrix is : \n";
     
     for(i=0;i<r;i++)
     {
        t = n[a][i];
       n[a][i] = n[i][b];
       n[i][b] = t;
     }
     
     display();
     
  }
  
};


int main()
{
    matrix m;
    
    m.accept();
    m.display();
    
    m.transpose();
    
    return 0;
}