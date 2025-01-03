#include<stdio.h>

int main()
{
    int n1,n2,x,y,gcd,lcm;
    
    printf("ENTER ANY TWO NUMBERS: ");
    scanf("%d %d",&n1,&n2);
    
    x=n1;
    y=n2;
    
    while(n1!=n2)
    {
       if(n1>n2)
       {
          n1=n1-n2;
       }
       else
       {
          n2=n2-n1;
       }
    }
    
    printf("GCD is:%d",n1);
    
    gcd=n1;
    
    lcm=(x*y)/gcd;
    
    printf("\nLCM is:%d",lcm);
   
    return 0;
}