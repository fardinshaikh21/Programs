#include<stdio.h>

  struct book
  {
   int bookid;
   char name[20];
   float price;
  };
   int main()
 {
     struct book b[100];
     int n,i;
    
     printf("Enter the number of Book you want: ");
     scanf("%d",&n); 
    
     for(i=1;i<=n;i++)
    {
      printf("\nEnter Book Id: ");
      scanf("%d",&b[i].bookid);
      printf("\nEnter Book Name: ");
      scanf("%s",&b[i].name);
      printf("\nEnter Book Price: ");
      scanf("%f",&b[i].price);
     }
        
        printf("\nBooks Details are: \n");

     
     for(i=1;i<=n;i++)
    {
      printf("\nBook Id is: %d\n",b[i].bookid);
     
      printf("\nBook Name is: %s\n",b[i].name);
      
      printf("\nBook Price is: %f\n",b[i].price);
    }

   return 0;
}