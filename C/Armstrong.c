#include<stdio.h>

int main()
{
    int n,c,r,arm=0;
    
    printf("Enter Any number: ");
    scanf("%d",&n);
    
    c=n;
    
    while(n>0)
    {
      r=n%10;
      arm=(r*r*r)+arm;
      n=n/10;
    }
    if(c==arm)
    printf("Astogram");
    else
    printf("Not Astogram");
    return 0;
}