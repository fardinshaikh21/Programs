#include<stdio.h>
int main()
{
    int number, i,sum,start,stop;

    printf("Enter two Numbers: ");
    scanf("%d %d",&start,&stop);
    printf("Perfect number between %d and %d:",start,stop);

    for(number=start; number<=stop; number++)
    {
        sum=0;
        for(i=1; i <= number/2; ++i)
        {
            if (number%i == 0)
            {
                sum+=i;
            }
        }
        if(sum==number)
        {
            printf("%d ",number);
        }

    }


    return 0;
}