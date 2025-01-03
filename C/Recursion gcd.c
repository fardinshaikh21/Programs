#include<stdio.h>

int main()
{
    int m,n,g;
    
    printf("Enter Two Numbers: ");
    scanf("%d %d",&m,&n);
   //scanf("%d %d",&a,&b);
    
    g=gcd(m,n);
  //g=gcd(a,b);
    
    printf("Gcd is %d",g);
    return 0;
}

int gcd(int a,int b)
{  
   if(b==0)
   return a;
   else
   return gcd(b,a%b);
}