#include<stdio.h>


int bsearch(int a[],int lb,int ub,int item)
{
   int mid;
   
   while(lb<=ub)
   { 
     mid=(lb+ub)/2;
    
     if(a[mid]==item)
     {
       return mid;
      // break;
     }
     if(a[mid]<item)
     {
       return bsearch(a,mid+1,ub,item);
     }
     else
     {
       return bsearch(a,lb,mid-1,item);
     }
   }
 return -1;
}


int main()
{
    int lb,ub,n,i,item,mid,a[100], result;
    
    printf("Enter the Number you Want: ");
    scanf("%d",&n);
    
    printf("\nEnter the Numbers are Assending order: ");
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    
    printf("\nthe Numbers are: ");
    for(i=0;i<n;i++)
    {
       printf("%d ",a[i]);
    }
    
    printf("\nEnter the Number you want Found: ");
    scanf("%d",&item); 
    
   // lb=0,ub=n-1;
    
    result=bsearch(a,0,n-1,item);
    
    if(result==-1)
    {
      printf("\nNumber is not Found");
    }
    else
    {
       // printf("\nNumber is not Found");
          printf("\nNumber is Found Index is:%d",result);
    }
    
     return 0;
}