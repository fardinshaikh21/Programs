#include<stdio.h>

int main()
{
    int lb=0,ub=5,f=0,item,i,mid,a[5]={20,30,60,100,200};
    
    for(i=0;i<5;i++)
    {
       printf("%d ",a[i]);
    }
    
    printf("\nEnter the Item You Want Found:");
    scanf("%d",&item);
    
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
      printf("The %d Number is Found Index is:%d",item,mid);
    }
    else
    {
      printf("Number is Not Found");
    }
    
     return 0;
}