#include<stdio.h>

int main()
{
    int n,r,d=0,base=1;
    
    printf("Enter Binary number: ");
    scanf("%d",&n);
    
    while(n>0)
    {
       r=n%10;
       d=d+r*base;
       n=n/10;
       base=base*2;
    }
    
    printf("Decimal Number is: %d",d);
  
    return 0;
}