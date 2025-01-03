#include<stdio.h>
#define ROWMAX 10
#define COLMAX 10

int main()
{
    int row,column,y;
    row=1;
    
    do
    {
       column=1;
    do
    {
      y=row*column;
      printf("%d ",y);
      column=column+1;
    } while(column<=COLMAX);
    
      printf("\n");
      row=row+1;
    
    } while(row<=ROWMAX);
    
    return 0;
}