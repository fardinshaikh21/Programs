#include<stdio.h>

int main()
{
    int n,fac=1,i;
    
    printf("Enter The Number: ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
       fac=fac*i;
    }
    
    printf("%d Factorial is : %d",n,fac);
    
    return 0;
}