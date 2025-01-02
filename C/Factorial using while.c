#include<stdio.h>

int main()
{
   int n,i=1,fac=1;
   
    printf("Enter the Number: ");
    scanf("%d",&n);
    
    while(i<=n)
    {
      fac=fac*i;
      printf("%d\n",fac);
      i++;
    }
    
    return 0;
}