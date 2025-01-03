#include<stdio.h>

int main()
{
    int n,i,a[20];
    
  printf("Enter How many elements you want: ");
  scanf("%d",&n); 

  printf("\nEnter The Elements: ");

 for(i=1;i<=n;i++)
 {
   scanf("%d",&a[i]);
 }
 printf("\nEntered Elements are: ");
 for(i=1;i<=n;i++)
{
  printf("\n%d",a[i]);
}
    return 0;
}