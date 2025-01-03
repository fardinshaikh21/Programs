#include<stdio.h>

int main()
{
    int sum(int);
    int n,i,s=0;
    
    printf("Enter Any One Number: ");
    scanf("%d",&n);
    
    s=sum(n);
    
    return 0;
}

   int sum(int n)
{
   int i,s=0;
 
   for(i=1;i<=n;i++)
  {
    s=s+i;
  }
    printf("Sum is:%d",s);
}