#include<stdio.h>

int main()
{
    int a=0,b=1,c,n,i;
    
    printf("Entre the Number: ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    //  while(i<=n)
    {
    /* if(a%2==0)
      {
       printf("%d ",a);
      }*/
      printf("%d\n",a);
      c=a+b;
      a=b;
      b=c;  
    //  i++; 
    }
    
    // 0 1 1 2 3 5 8 13 21 34
    return 0;
}