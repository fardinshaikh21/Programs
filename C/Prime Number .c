#include<stdio.h>

int main()
{
    int n,i,count=0;
    
    printf("Enter The Number: ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
      if(n%i==0)
      {
        count++;
      }
    }
    if(count==2)
    {  
      printf("This is Prime Number");
    }
    else
    { 
      printf("This is Not Prime Number");
    }
    return 0;
}