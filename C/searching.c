#include<stdio.h>

int main()
{
    int n,i,key,a[100];
    
    printf("Enter elements you want:");
    scanf("%d",&n);
    
    printf("\nEnter the Elements:");
    
     for(i=0;i<n;i++)
     {
       scanf("%d",&a[i]);
     }
    
    printf("\nEnter the Key: ");
    scanf("%d",&key);
    
    for(i=0;i<n;i++)
    {
       if(a[i]==key)
       {
         printf("Element Found");
         break;
       }
    }
    
    if(i==n)
    {
       printf("Element Not found");
    }
    
    return 0;
}