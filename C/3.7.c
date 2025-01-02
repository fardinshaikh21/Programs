#include<stdio.h>

int main()
{
    char str[1000];
    int i,count=0,total=0;

    printf("Enter The String: ");
    gets(str);

    for(i=0; str[i] ; i++)
    {
        if(str[i]==' ')
        {
            count++;
        }
        else
        {
            total++;
        }

    }

    printf("\nTotal White Space is:%d",count);
    printf("\nTotal Character is:%d",total);
       return 0;
}