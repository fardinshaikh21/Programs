#include<stdio.h>

int main()
{
    int a[7]={83,92,78,29,99,10,22},item,i;
    
    for(i=0;a[i];i++)
    {
      printf("%d ",a[i]);
    }
    
    i=0;
    
    printf("\n\nEnter the Item You Want Found: ");
    scanf("%d",&item);
    
    while(i<7)
    {
       if(a[i]==item)
       {
          printf("\nItem is Found Location is:%d",i);
          break;
       }
     
      i++;
    }
    
    if(i>=7)
    {
       printf("Item is Not Found");
    }
      return 0;
}