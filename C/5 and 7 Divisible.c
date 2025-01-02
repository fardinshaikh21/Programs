#include<stdio.h>

int main()
{
    int n;
    
    printf("Enter Any One Number: ");
    scanf("%d",&n);
    
    if(n%5==0 && n%7==0)
    {
      printf("%d This Numbar is Divisible By 5 and 7",n);
    }
    else
    {
      printf("%d This Numbar is Not Divisible By 5 and 7",n);
    }
    return 0;
}