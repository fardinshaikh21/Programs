#include<stdio.h>

int main()
{
    int i,j,a[10][10];
    
    printf("Enter Elements: ");
    
    for(i=0;i<2;i++)
    {
      for(j=0;j<2;j++)
      scanf("%d",&a[i][j]);
    }
    
    printf("Entered Matrix is:\n ");
    
    for(i=0;i<2;i++)
    {
      for(j=0;j<2;j++)
      {
       printf("%d ",a[i][j]);
      }
      printf("\n");
    }
    
    return 0;
}