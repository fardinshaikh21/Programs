#include<stdio.h>

int main()
{
    int n,i,j;
    
    printf("Enter The Number: ");
    scanf("%d",&n);
   
    for(i=n;i>=0;i--)
    {
      for(j=1;j<=i;j++)
      {
        printf("12345");
        printf("\n1234");
        printf("\n123");
        printf("\n12");
        printf("\n1");
        
      }
       printf("\n");
    }
    return 0;
}