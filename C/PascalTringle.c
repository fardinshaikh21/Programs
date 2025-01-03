#include<stdio.h>

void PascalTringle(int rows)
{ 
   int i,j,space,value;
   
   for(i=0;i<rows;i++)
   {
      for(space=0;space<rows-i-1;space++)
      {
        printf(" ");
      }
      
      for(j=0;j<=i;j++)
      {
          if(i==0 || j==0)
          {
             value = 1;
          }
          else 
          {
             value = value * (i-j+1)/j;
          }
          
          printf("%d ",value);
      }
      
         printf("\n");
   }
}
int main()
{
    int n;
    
   printf("Enter How Many Rows You Want : ");
   scanf("%d",&n); 
   
   PascalTringle(n);
    
    return 0;
}

