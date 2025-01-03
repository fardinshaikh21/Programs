#include<stdio.h>

int linear(int a[],int item,int n)
{
   int i;

   for(i=0;i<n;i++)
  {
    if(a[i]==item)
    {
      return i;
      break;
    }
  }
  return -1;  
}

int main()
{
    int a[100],item,i,n, result;
    
    printf("Enter the Number you want: ");
    scanf("%d",&n);
    
    printf("\nEnter the Number:\n");
    
    for(i=0;i<n;i++) 
    {
      scanf("%d",&a[i]);
    }
    printf("\nThe Numbers are:\n");
    for(i=0;i<n;i++)
    {
      printf("%d ",a[i]);
    }
    
    
    printf("\n\nEnter the Item You Want Found: ");
    scanf("%d",&item);
    
    result=linear(a,item,n);
    
    if(result==-1)
    {
       printf("\nItem is Not Found");
    }
    else
    {
     printf("\nNumber is Found Index is:%d",result);
    }
      return 0;
}