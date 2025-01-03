#include<stdio.h>


struct student
{
   int no;
   char name[100],add[100];
   float per;
};
int main()
{
   struct student s[100];
   int n,i;
   float total;

   printf("Enter Number you details of students: ");
   scanf("%d",&n); 

   printf("\nEnter Student Details:\n");
    
  for(i=1;i<=n;i++)
  {
     printf("\nEnter Student No: ");
     scanf("%d",&s[i].no);
     printf("\nEnter Student Name: ");
     scanf("%s",&s[i].name);
     printf("\nEnter Student Address: ");
     scanf("%s",&s[i].add);
     printf("\nEnter Student Percentage: ");
     scanf("%f",&s[i].per);
  }

printf("\nStudent Details are:\n");
    
  for(i=1;i<=n;i++)
  {
     printf("\nStudent No:%d\n",s[i].no);
   
     printf("Student Name:%s\n",s[i].name);
     
     printf("Student Address:%s\n",s[i].add);
     
     printf("Student Percentage:%f\n",s[i].per);
    
  }

  
    return 0;
}