#include<stdio.h>

int bsearch (int a[],int key,int lb,int ub)

{
   int mid;

  while(ub>=lb)
  {
     mid=(ub>=lb)/2;
    
     if(key<a[mid])
     {
       ub=mid-1;
     }
     else if(key>a[mid])
     {
       lb=mid+1;
     }
     else if (key==a[mid])
     {
        return (mid);
     }
      return (bsearch(a,key,lb,ub));
  }
 
   return -1;

}

  int main()
{
   int a[]={3,4,5,6,7,8,9}; 
   printf("%d ",bsearch(a,7,0,6));
   
    return 0;
}