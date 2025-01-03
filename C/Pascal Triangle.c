#include<stdio.h>

int fac(n)
{
   int f=1,i;
   if(n<=1)
   {
     return 1;
   }
   else
   {
     for(i=1;i<=n;i++)
     {
        f *= i;
     }
     return f;
   }
}

int main()
{
   int n,i,j;
   
   printf("Enter Height of Pascal triangle : ");
   scanf("%d",&n);
   
   for(i=0;i<n;i++) 
   {
      for(j=0;j<=i;j++)
      {
        printf("%d ",fac(i)/(fac(j)*fac(i-j)));
      }
      printf("\n");
   }
    return 0;
}