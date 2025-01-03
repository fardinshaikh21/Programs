#include<stdio.h>

int main()
{
    int n,c,r,f,sum=0,first,last,s;
    
    do
    {
      printf("\n\n0.Exit");
      printf("\n1.Sum of First N Number");
      printf("\n2.Sum of First & Last digit");
      
      printf("\n\nYour Choice:-");
      scanf("%d",&c);
    
     
    switch(c)
 {
     case 1:
     printf("\nEnter The Number: ");
     scanf("%d",&n);
     sum=n*(n+1)/2;
     printf("\n%d This Number of Sum is:%d",n,sum);
     break;
    
     case 2:
     printf("\nEnter The Number: ");
     scanf("%d",&n);
    
     while(n>0) 
   { 
     r=n%10;
     printf("\nLast digit is: %d",r);
     last=r;
     n=n/10;
     printf("\n\nFirst Digit is: %d",n);
     first=n;
     break;
   }
  
    s=first+last;
    printf("\n\nFirst & Last digit sum is:%d",s);
    f=s*(s+1)/2;
    printf("\n\nSum is %d",f);
 }
    
    }while(c!=0);
    
    
    return 0;
}