#include<stdio.h>

int main()
{
    int n,i,a[5],b[5];
    
    printf("Enter The Array you want find square: ");
    scanf("%d",&n);
    
    printf("\nEnter The Number:\n");
    
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    
   printf("\nFirst Array in Square of this Number is:\n");
    
    for(i=0;i<n;i++)
    {
       printf("%d\n",a[i]*a[i]);
    }
    
    printf("\nSecond Array in Square of this Number is:\n");
    
    for(i=0;i<n;i++)
    {
       b[i]=a[i]*a[i];
    }
    
     for(i=0;i<n;i++)
    {
      printf("%d\n",b[i]);
    }
    
    return 0;
}