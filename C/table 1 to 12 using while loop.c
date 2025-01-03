#include<stdio.h>
#define R 12
#define C 10
int main()
{
    int i=1,j,t;
   // int R=12,C=10;
    
  //  i=1;
     
    
    while(i<=C)
    {
       j=1;  
       while(j<=R)
      {
        t=j*i;
        printf("%d ",t);
        j++;
      }
       printf("\n");    
       i++;
    }
    return 0;
}