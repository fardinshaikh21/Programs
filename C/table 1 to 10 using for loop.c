#include<stdio.h>
#define R 10
#define C 10
int main()
{
    int row,column,t;
  //int R=10;C=10;

    for(column=1;column<=C;column++)
    {
       for(row=1;row<=R;row++)
       {
          t=row*column;
          printf("%d ",t);
       }
         printf("\n");
    }
    
    return 0;
}