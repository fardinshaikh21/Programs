#include<stdio.h>

int main()
{
    int r1,c1,r2,c2,i,j,k;
    
    printf("\t\tMatrix 1 \n\n");
    printf("Enter How Many Rows : ");
    scanf("%d",&r1);
    printf("Enter How Many Columns : ");
    scanf("%d",&c1);
    
    int matrix1[r1][c1];
    
    printf("\n\tEnter Matrix Elements :\n");
    
    for(i=0;i<r1;i++)
    {
      for(j=0;j<c1;j++)
      {
        scanf("%d",&matrix1[i][j]);
      }
    }
    
    printf("\t\tMatrix 2 \n\n");
    printf("Enter How Many Rows : ");
    scanf("%d",&r2);
    printf("Enter How Many Columns : ");
    scanf("%d",&c2);
    
    int matrix2[r2][c2];
    
    printf("\n\tEnter Matrix Elements :\n");
    
    for(i=0;i<r2;i++)
    {
      for(j=0;j<c2;j++)
      {
        scanf("%d",&matrix2[i][j]);
      }
    }
    
    printf("\nMatrix 1 :\n");
    
     for(i=0;i<r1;i++)
    {
      for(j=0;j<c1;j++)
      {
        printf("%d ",matrix1[i][j]);
      }
      printf("\n");
    }
    
    printf("\nMatrix 2 :\n");
    
     for(i=0;i<r2;i++)
    {
      for(j=0;j<c2;j++)
      {
        printf("%d ",matrix2[i][j]);
      }
      printf("\n");
    }
    
    if(c1==r2)
   {
      int matrix3[r1][c1];
      
       for(i=0;i<r1;i++)
       {
          for(j=0;j<c2;j++)
          {
             int sum = 0;
             
             for(k=0;k<c1;k++)
             {
                sum += matrix1[i][k] * matrix2[k][j];
             }
             
            matrix3[i][j] = sum ;
          }
       }
       
     printf("\nMatrix1 & Matrix2 Multiplication is :\n");
    
     for(i=0;i<r1;i++)
    {
      for(j=0;j<c2;j++)
      {
        printf("%d ",matrix3[i][j]);
      }
      printf("\n");
    }
    
   }
   else
   {
      printf("\nMultiplication is Impossible Matrix1 & Matrix2");
   }
    
    
   if(r1==r2 && c1==c2)
   {
      int matrix3[r1][c1];
      
       for(i=0;i<r1;i++)
       {
          for(j=0;j<c1;j++)
          {  
            matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
          }
       }
       
     printf("\nMatrix1 & Matrix2  Addition is :\n");
    
     for(i=0;i<r1;i++)
    {
      for(j=0;j<c2;j++)
      {
        printf("%d ",matrix3[i][j]);
      }
      printf("\n");
    }
    
   }
   else
   {
      printf("\nMultiplication is Impossible Matrix1 & Matrix2");
   }
    return 0;
}