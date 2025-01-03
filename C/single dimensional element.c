#include<stdio.h>

int main()
{
    int n,i,a[10];
    
    printf("Enter How many element u want: ");
    scanf("%d",&n);
    
    printf("Enter Elements: ");
    
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    
    printf("Entered elements are: ");
    
    for(i=0;i<n;i++)
    {
      printf("\n%d",a[i]);
    }
    
    return 0;
}