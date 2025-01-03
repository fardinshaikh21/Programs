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
    
    for(i=1;i<n;i++)
    {
    
        j=i;
        
       while(j>0 && number[j-1]>number[j])
      {
           a=number[j];
           number[j]=number[j-1];
           number[j-1]=a;
           j--;
      }
    }
    
    printf("Assending order are:\n");
    
    for(i=0;i<n;i++)
    {
      printf("%d\n",number[i]);
    }
     return 0;
}