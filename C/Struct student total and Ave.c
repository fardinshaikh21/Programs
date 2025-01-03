#include<stdio.h>

 struct student
{
   int rollno;
   char name[30];
   float marks1,marks2,marks3;
};

 int main()
{
   struct student s[100];
   int n,i;
   float total,ave;

   printf("Enter the Numbers of Student Details you want: ");
   scanf("%d",&n);

   for(i=1;i<=n;i++)
  {
     printf("\nEnter Student Roll No: ");
     scanf("%d",&s[i].rollno);
     printf("\nEnter Student Name: ");
     scanf("%s",&s[i].name);
     printf("\nEnter Student Marks1: ");
     scanf("%f",&s[i].marks1);
     printf("\nEnter Student Marks2: ");
     scanf("%f",&s[i].marks2);
     printf("\nEnter Student Marks3: ");
     scanf("%f",&s[i].marks3);
  }

   printf("\n\nThe Students Details are:\n");

   for(i=1;i<=n;i++)
  {
    printf("\nStudent Roll no is:%d",s[i].rollno);
    printf("\nStudent Name is:%s",s[i].name);
    printf("\nFirst Subject Marks is:%f",s[i].marks1);
    printf("\nSecond Subject Marks is:%f",s[i].marks2);
    printf("\nThird Subject Marks is:%f",s[i].marks3);
 
    total=s[i].marks1+s[i].marks2+s[i].marks3;
    ave=total/3;
    
    printf("\nTotal Marks are:%f",total);
    printf("\nAverage of Marks is:%f\n",ave);
  }
     
    return 0;
}