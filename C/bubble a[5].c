#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,t,a[5]={10,20,35,23,12};
    
    for(i=0;a[i];i++)
    {
       for(j=0;j<5-i-1;j++)
       {
         if(a[j]>a[j+1])
        {
           t=a[j];
           a[j]=a[j+1];
           a[j+1]=t;
        }
        
       }
    }
    
    printf("THE ELEMENTS ARE ASSENDING ORDERS:\n");
   
    for(i=0;a[i];i++)
    {
      printf("%d\n",a[i]);
    }
      return 0;
}