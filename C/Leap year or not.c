#include<stdio.h>

int main()
{
    int year;
    
    printf("Enter Any Year: ");
    scanf("%d",&year);
    
    if(year%4==0 || year%100==0)
    {
      printf("%d This Year is Leap year",year);
    }
    else
    { 
     printf("%d This Year is Not Leap year",year);
    }
    return 0;
}