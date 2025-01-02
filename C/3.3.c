#include<stdio.h>

int main()
{
    int m,n,i;

    printf("Enter two Number: ");
    scanf("%d %d",&m,&n);

    for(i=m; i<=n; i++)
    {
        if(i%3==0 && i%4!=0)
        {
            printf("\n%d = This Number is Divisible 3 but Not 4\n",i);
        }
    }


    return 0;
}