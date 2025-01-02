#include<stdio.h>

int main()
{
    int a=0,b=1,c,n,i;
    
    printf("Enter the Number: ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
       if(a%2==0)
     
       printf("Fibonacci Numbers are: %d\n",a);
      
       c=a+b;
       a=b;
       b=c;  
     
     
    }
    return 0;
}