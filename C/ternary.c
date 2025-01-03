#include<stdio.h>

int main()
{
    int a,b,c;
    
   printf("Enter the First Number: ");
   scanf("%d",&a);
   printf("Enter the Second Number: ");
   scanf("%d",&b);
   printf("Enter the Third Number: ");
   scanf("%d",&c);

  (a>b && a>c)? printf("A=%d is Greater",a):
  (b>a && b>c)? printf("B=%d is Greater",b):
     printf("C=%d is Greater",c);
    
 (a<b && a<c)? printf("\nA=%d is Less",a):
  (b<a && b<c)? printf("\nB=%d is Less",b):
     printf("\nC=%d is Less",c);
    return 0;
}