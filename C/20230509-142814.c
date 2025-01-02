#include<stdio.h>

int main()
{
    int a,b,sum=0,i;
    
    printf("Enter Two Numbers: ");
    scanf("%d %d",&a,&b);
   
     for(i=a;i<=b;i++)
    {
      sum=sum+i;
    }
    printf("sum is:%d",sum);
    return 0;
}