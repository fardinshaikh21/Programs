#include<stdio.h>

int main()
{
    int a,b,m,n,lcm,gcd,ch;



    do
    {
        printf("\n\n0.You Exit this Program");
        printf("\n1.You Find GCD");
        printf("\n2.You Find LCM");
        printf("\n\nEnter Your Choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:

            printf("\nEnter Two Numbers: ");
            scanf("%d %d",&a,&b);

            while(a!=b)
            {
                if(a>b)
                {
                    a=a-b;
                }
                else
                {
                    b=b-a;
                }
            }
            printf("\nGCD is: %d",a);
            break;

        case 2:

            printf("\nEnter Two Numbers: ");
            scanf("%d %d",&a,&b);

            if(a>b)
            {
                lcm=a;
            }
            else
            {
                lcm=b;
            }

            while(1)
            {
                if(lcm%a==0 && lcm%b==0)
                {
                    printf("\nLCM is: %d",lcm);
                    break;
                }
                lcm++;
            }


        }


    } while(ch!=0);

    return 0;
}