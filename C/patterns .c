#include<stdio.h>
/*
 int main()
{
    int n,i,j,k;
    
    printf("Enter The Number: ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
      for(j=i;j<=n-1;j++)
      {
         printf(" ");
      }
      for(k=1;k<=i;k++)
      {
        printf("%d",k);
      }
       printf("\n");
    }
    return 0;
} 

/*
                1
               12
              123
             1234
            12345
*/
/*
int main()
{
    int n,i,j,k;
    
    printf("Enter The Number: ");
    scanf("%d",&n);
    
    for(i=n;i>=1;i--) //i=5 // i=4
    {
      for(j=i;j<=n-1;j++) // j=5 5<=4 // j=4 4<=4 j=5
      {
         printf(" ");  // space
      }
      for(k=1;k<=i;k++) // k=1 1<=5
      {
        printf("%d",k); //1 2 3 4 5
      }
       printf("\n");
    }
    return 0;
} 
/*
            12345
             1234
              123
               12
                1
*/ 
/*
int main() 
{
int n,i,j,k;
    
    printf("Enter The Number: ");
    scanf("%d",&n);
    
    for(i=n;i>=1;i--) i=5
    {
      for(j=i;j<=n-1;j++) // j=5 5<=5-1 
      {
         printf(" ");  
      }
      for(k=i;k>=1;k--)  // k=5 5>=1 
      {
        printf("%d",k); // 5 4 3 2 1
      }
       printf("\n");
    }
    return 0;
}  
/*
            54321
             4321
              321
               21
                1
*/    
/*
int main() 
{
int n,i,j,k;
    
    printf("Enter The Number: ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
      for(j=n;j>=1;j--) 
      {
        if(i>=j)
          printf("%d",j); 
        else
          printf(" ");
      }
   
       printf("\n");
    }
    return 0;
}  
 /*
             1
            21 
           321
          4321 
         54321 
 */
/*int main() 
{
int n,i,j,k;
    
    printf("Enter The Number: ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
       for(j=i;j<=n-1;j++)
       {
         printf(" ");
       }
       for(k=1;k<=i;k++) 
      {
        printf("%d",k);
      }
        printf("\n");
    }
    return 0;
} */
/*
int main() 
{
int n,i,j,k;
    
    printf("Enter The Number: ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
      for(j=n-1;j>=i;j--)
      {
        printf(" ");
      }
      for(k=1;k<=i;k++)
      {
        printf("*");
      }
        printf("\n");
    }
    for(i=n;i>=1;i--)
    {
      for(j=i;j<=n-1;j++)
      {
        printf(" ");
      }
      for(k=1;k<=i;k++)
      {
        printf("*");
      }
        printf("\n");
    }
    return 0;
} 
/*
         *
        **
       ***
      ****
     *****
    ******
   *******
  ********
 *********
**********
**********
 *********
  ********
   *******
    ******
     *****
      ****
       ***
        **
         *  
*/
/*
int main() 
{
int n,i,j,k;
    
    printf("Enter The Number: ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
      for(j=n-1;j>=i;j--)
      {
        printf(" ");
      }
      for(k=1;k<=i;k++)
      {
        printf("* ");
      }
        printf("\n");
    }
    for(i=n;i>=1;i--)
    {
      for(j=i;j<=n-1;j++)
      {
        printf(" ");
      }
      for(k=1;k<=i;k++)
      {
        printf("* ");
      }
        printf("\n");
    }
    return 0;
} 
/*
         *
        * *
       * * *
      * * * *
     * * * * *
    * * * * * *
   * * * * * * *
  * * * * * * * *
 * * * * * * * * *
* * * * * * * * * *
* * * * * * * * * *
 * * * * * * * * *
  * * * * * * * *
   * * * * * * *
    * * * * * *
     * * * * *
      * * * *
       * * *
        * *
         *
*/
/*
int main() 
{
int n,i,j,k;
    
    printf("Enter The Number: ");
    scanf("%d",&n);
    
    for(i=n;i>=1;i--)
    {
      for(j=i;j<=n-1;j++)
      {
        printf(" ");
      }
      for(k=1;k<=i;k++)
      {
        printf("* ");
      }
        printf("\n");
    }
    for(i=1;i<=n;i++)
    {
      for(j=i;j<=n-1;j++)
      {
        printf(" ");
      }
      for(k=1;k<=i;k++)
      {
        printf("* ");
      }
        printf("\n");
    }
    return 0;
}
/*

* * * * * * * * * *
 * * * * * * * * *
  * * * * * * * *
   * * * * * * *
    * * * * * *
     * * * * *
      * * * *
       * * *
        * *
         *
         *
        * *
       * * *
      * * * *
     * * * * *
    * * * * * *
   * * * * * * *
  * * * * * * * *
 * * * * * * * * *
* * * * * * * * * * 

*/
/*
int main() 
{
int n,i,j;
    
    printf("Enter The Number: ");
    scanf("%d",&n);
    
    for(i=n;i>=-n;i--)
    {
      for(j=n;j>=abs(i);j--)
      {
        printf("* ");
      }
       printf("\n");
    }
   
    return 0;
}
/*
*                
* *
* * *
* * * *
* * * * *
* * * * * *
* * * * *
* * * *
* * *
* *
*
*/
/*
*
**
***
****
*****        
******
*****
****
***
**
*
*/

