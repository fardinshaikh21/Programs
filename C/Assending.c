#include<stdio.h>

int main()
{
    int i,j,a,n,number[20];

    printf("Enter the Number you Want: ");
    scanf("%d",&n);

    printf("Enter the Numbers: ");

    for(i=0; i<n; i++)
    {
        scanf("%d",&number[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(number[i]>number[j])
            {
                a=number[i];
                number[i]=number[j];
                number[j]=a;
            }
        }
    }

    printf("Numbers is Assending order are:\n");
    for(i=0; i<n; i++)
    {
        printf("%d\n", number[i]);
    }
    return 0;
}