#include<stdio.h>

int main()
{
    int lb=0,ub=9,f=0,mid,item,a[10]={12,16,23,25,35,45,59,68,89,97};
    
    printf("Enter the number You want Found: ");
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
       printf("Number is Found This Number Position is %d",mid);
    }
    else
    {
       printf("Number is not Found");
    }
     return 0;
}