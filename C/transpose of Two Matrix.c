#include<stdio.h>

int main()
{
    int i,j,a[3][3],b[3][3],c[3][3];
    
    printf("Enter The First Matrix: ");
    
    for(i=0; i<3; i++)
    {
       for(j=0; j<3; j++)
       {
          scanf("%d",&a[i][j]);
       }
    
    }
    
    printf("\nEnter The Second Matrix: ");
    
    for(i=0; i<3; i++)
    {
       for(j=0; j<3; j++)
       {
          scanf("%d",&b[i][j]);
       }
    
    }
    
    printf("\nThe First Matrix are:\n");
    
    
    for(i=0; i<3; i++)
    {
       for(j=0; j<3; j++)
       {
          printf("%d ",a[i][j]);
       }
         printf("\n");
    }
    
    
    for(i=0; i<3; i++)
    {
       for(j=0; j<3; j++)
       {
          c[j][i]=a[i][j];
          
       }
        
    }
    
    printf("\ntranspose Of First Matrix is\n");
    
     for(i=0; i<3; i++)
    {
       for(j=0; j<3; j++)
       {
          printf("%d ",c[i][j]);
       }
        printf("\n");
    }
    
    
    
     printf("\nThe Second Matrix are:\n");
    
    for(i=0; i<3; i++)
    {
       for(j=0; j<3; j++)
       {
          printf("%d ",b[i][j]);
       }
         printf("\n");
    }
    
    
     
    
     for(i=0; i<3; i++)
    {
       for(j=0; j<3; j++)
       {
          c[j][i]=b[i][j];
          
       }
        
    }
    
    
    
    printf("\ntranspose Of Second Matrix is\n");
    
     for(i=0; i<3; i++)
    {
       for(j=0; j<3; j++)
       {
          printf("%d ",c[i][j]);
       }
        printf("\n");
    }
    
    
    
  
    
    
    
    
     return 0;
}