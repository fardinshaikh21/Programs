#include<stdio.h>

int main()
{
    int m,n;
    printf("Enter Two Numbers: ");
    scanf("%d %d",&m,&n);
    
    m=(m>0)?m:-m;
    n=(n>0)?n:-n;
    
    while(m!=n)
    {
        if(m>n)
        {
          m=m-n;
        }
        else
        {
          n=n-m;
        }
    }
    
    printf("GCD is : %d",m);
  
    return 0;
}