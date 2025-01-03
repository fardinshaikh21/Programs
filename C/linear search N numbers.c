#include<stdio.h>

int main()
{
    int a[100],item,i,n;
    
    printf("Enter the Number you want: ");
    scanf("%d",&n);
    
    printf("\nEnter the Number:\n");
    
    for(i=0;i<n;i++) 
    {
      scanf("%d",&a[i]);
    }
    printf("\nThe Numbers are:\n");
    for(i=0;i<n;i++)
    {
      printf("%d ",a[i]);
    }
    
    i=0;
    
    printf("\n\nEnter the Item You Want Found: ");
    scanf("%d",&item);
    
    while(i<n)
    {
       if(a[i]==item)
       {
          printf("\nItem is Found Location is:%d",i);
          break;
       }
     
      i++;
    }
    
    if(i>=n)
    {
       printf("Item is Not Found");
    }
      return 0;
}