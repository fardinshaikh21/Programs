#include<stdio.h>

int main()
{
    int n,i,fac=1;
    
    printf("Enter Any Number: ");
    scanf("%d",&n);
    
     for(i=1;i<=n;i++)
    {
      fac=fac*i;
      printf("Factorial is:%d\n",fac);
  
    }
    
    
    return 0;
}