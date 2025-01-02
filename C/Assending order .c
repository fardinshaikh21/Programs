#include<stdio.h>

int main()
{
    int n,a, number[100],i,j;
    
    printf("Enter the Number you want: ");
    scanf("%d",&n);
    
    printf("Enter the Elements: ");
    
    for(i=0;i<n;i++)
    {
       scanf("%d",&number[i]);
    }
    
    for(i=0;i<n;i++)
    {
       for(j=0;j<n-i-1;j++)
      {
         if(number[j]>number[j+1])
         {
           a=number[j];
           number[j]=number[j+1];
           number[j+1]=a;
         }
      }
    }
    
    printf("Assending order are:\n");
    
    for(i=0;i<n;i++)
    {
      printf("%d\n",number[i]);
    }
     return 0;
}