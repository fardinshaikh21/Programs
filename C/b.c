#include<stdio.h>


int bsearch(int a[],int lb,int ub,int item)
{
   int mid;
   
   if(lb<=ub)
   {
     mid=(lb+ub)/2;
     
     if(a[mid]==item)
     {
        return mid;
     }
     if(a[mid]<item)
     {
       bsearch(a,lb,mid+1,item);
     }
     else
     {
        bsearch(a,mid-1,ub,item);
     }
    
   }
   return -1;
}
int main()
{
   int f,item,i,a[7]={10,20,30,40,50,60,70};
  
   printf("The Numbers are: ");
   for(i=0;i<7;i++)
   {
     printf("%d ",a[i]);
   }

   printf("\n\nEnter the Number you want Found: ");
   scanf("%d",&item);
  
  f=bsearch(a,0,6,item);

  if(f==-1)
  {
    printf("\nNumber is Not Found ");
  }
  else
  {
    printf("\nNumber is Found Index is:%d",f);
  }

   
  return 0;
}