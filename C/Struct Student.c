#include<stdio.h>

  struct student
  {
   int rollno;
   char name[20];
   float per;
  };
   int main()
 {
     struct student s[100];
     int n,i;
    
     printf("Enter the number of students you want: ");
     scanf("%d",&n); 
    
     for(i=1;i<=n;i++)
    {
      printf("\nEnter Student Roll no: ");
      scanf("%d",&s[i].rollno);
      printf("\nEnter Student Name: ");
      scanf("%s",&s[i].name);
      printf("\nEnter Student Percentage: ");
      scanf("%f",&s[i].per);
     }
        
        printf("\nStudent Details are: \n\n");

     
     for(i=1;i<=n;i++)
    {
      printf("Student is: %d\n",s[i].rollno);
     
      printf("Student Name is: %s\n",s[i].name);
      
      printf("Student Percentage is: %f\n\n",s[i].per);
    }

   return 0;
}