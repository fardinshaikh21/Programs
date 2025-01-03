#include<stdio.h>

int main()
{
  
   int n,t,i=1;

   printf("Entre the number: ");
   scanf("%d",&n);

    while(i<=10)
    {
      t=n*i;
      printf("(%d * %d) = %d\n",n,i,t);
      i++;
    }
    
    
    return 0;
}