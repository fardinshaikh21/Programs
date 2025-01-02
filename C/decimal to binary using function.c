#include<stdio.h>

int main()
{
    int binary(int);
    int n;
    
    printf("Enter the Decimal Number: ");
    scanf("%d",&n);
    
    binary(n);
    
    return 0;
}

   int binary(int n)
   {
      int r,b=0,base=1;
    
      while(n>0)
     {
        r=n%2;
        b=b+r*base;
        n=n/2;
        base=base*10;
     }
    
     printf("The Binary Number is:%d",b);
   }