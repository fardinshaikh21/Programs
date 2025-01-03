#include <stdio.h>

  int gcd(int a,int b) 
 {
    if(b==0) return a;
    return gcd(b,a%b);
 }

   int main()
 {

    char o;
    printf("Enter Operator ( + or - ): ");
    scanf("%c",&o);
    if(o=='+' || o=='-')
    {
        int n1,d1,n2,d2,n3,d3;
        printf("Enter 1st Numerator: ");
        scanf("%d",&n1);
        printf("Enter 1st Denominator: ");
        scanf("%d",&d1);
        printf("Enter 2st Numerator: ");
        scanf("%d",&n2);
        printf("Enter 2st Denominator: ");
        scanf("%d",&d2);

        if(o=='+')
        {
            n3=n1*d2+d1*n2;
            d3=d1*d2;
            int g=gcd(n3,d3);
            printf("Result is %d/%d",n3/g,d3/g);
        }
        else
        {
            n3=n1*d2-n2*d1;
            d3=d1*d2;
            int g=gcd(n3,d3);
            printf("Result is %d/%d",n3/g,d3/g);
        }
    } 
      else 
    {
        printf("Invalid Operator!");
    }

    return 0;
}