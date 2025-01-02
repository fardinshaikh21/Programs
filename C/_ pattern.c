#include<stdio.h>

int main()
{
    int n,i,j,k;
    
    printf("Enter Any One Number: ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++) //row
    {
       for(j=i;j<n;j++) //space
      {
        printf(" ");
      }
      for(k=1;k<=i;k++) //column
      {
        printf("*");
      }
        printf("\n");
    }
    return 0;
}