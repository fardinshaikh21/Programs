#include<stdio.h>

int main()
{
    int m,n,i;
    
    printf("Enter Two Numbars: ");
    scanf("%d %d",&m,&n);
    
  for(i=m;i<=n;i++)
 {
       if(i%3==0 && i%4!=0)
   {
    printf("%d is Divisible by 3 But Not 4 \n",i);
   }
 }
   return 0;
}