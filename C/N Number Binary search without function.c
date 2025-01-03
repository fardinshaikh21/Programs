#include<stdio.h>
#include<stdlib.h>

int main()
{
    int lb,ub,f,item,i,mid,n,a[100];
   
    printf("Enter the Number You Want: ");
    scanf("%d",&n);
    
    printf("\nEnter the Numbers Assending order:\n "); 
   
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    
    printf("\nThe Numbers are: "); 
   
    for(i=0;i<n;i++)
    {
       printf("%d ",a[i]);
    }
    
    printf("\nEnter the Item You Want Found:");
    scanf("%d",&item);
    
    lb=0,ub=n-1,f=0; 
    
    while(lb<=ub)
    {
       mid=(lb+ub)/2;
    
      if(a[mid]==item)
      {
         f=1;
         break;
      }
      if(a[mid]<item)
      {
        lb=mid+1;
      }
      else
      {
        ub=mid-1;
      }
    }
    
    if(f==1)
    {
      printf("\nThe %d Number is Found Index is:%d",item,mid);
    }
    else
    {
      printf("\nNumber is Not Found");
    }
    
     return 0;
}