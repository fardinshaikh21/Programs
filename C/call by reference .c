#include<stdio.h>

int main()
{
    void swap(int *,int *);
    int a,b;
    
    printf("Enter Two Numbers: ");
    scanf("%d %d",&a,&b);
    
    swap(&a,&b);
    
    printf("a= %d and b= %d",a,b);
    return 0;
    }
    
    void swap(int *a,int *b)
    {
      int t;
    
       t=*a;
      *a=*b;
      *b=t;
    
    }