#include<stdio.h>

int main()
{
    int x,n,i,sum=0;
    
    printf("Enter Two Number: ");
    scanf("%d %d",&x,&n);
    
    for(i=1;i<=n;i++)
    {
       sum=sum+(x-i);
       printf("(%d-%d)+",x,i);
    }
     printf("=%d",sum);
     
    return 0;
}