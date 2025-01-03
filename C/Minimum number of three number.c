#include<stdio.h>

int main()
{
    int a,b,c;
    
    printf("Enter Three Numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    
  (a<b&&a<c)?
  printf("Minimum Number is: %d",a):
  (b<a&&b<c)?
  printf("Minimum Number is: %d",b):
  printf("Minimum Number is: %d",c);
    return 0;
}