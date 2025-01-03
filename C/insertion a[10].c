#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,t,a[100]={84,77,97,467,2,9,55,35,19,38,10,53};
    
   /*printf("ENTER HOW MANY ELEMENTS YOU WANT: ");
  scanf("%d",&n);
    
  / printf("\nENTER THE ELEMENTS : ");
    
    for(i=0;i<a[i];i++)
    {
    scanf("%d",&a[i]);
  */  
    
    for(i=1;a[i];i++) 
    {
       j=i;
       
      while(j>0 && a[j-1]>a[j])
      {
           t=a[j];
           a[j]=a[j-1];
           a[j-1]=t;
           j--;
        
      }
    }
    
   printf("\nTHE ELEMENTS ASSENDING ORDERS ARE : \n");
  
   for(i=0;a[i];i++) 
  {
     printf("%d\n",a[i]);
  } 
      return 0;
}