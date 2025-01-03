#include<stdio.h>

int main()
{
    int m,n,i,j;
    
    printf("Enter Two Number: ");
    scanf("%d %d",&m,&n);
    
    for(i=m;i<=n;i++)
    {
         for(j=2;j<=i;j++)
        {
           if(i%j==0)
           break;
        }
        
         if(i==j)
         printf("prime number is:%d\n",j);
       
      
     
    } 
    return 0;
}