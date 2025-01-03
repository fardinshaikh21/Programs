#include<stdio.h>

struct student
{
  int rollno;
  char name[20];
  char addre[30];
  float per;
} s1;

int main()
{
   
  struct student rollno,name,addre,per;

  printf("Enter Student Roll No : ");
  scanf("%d",&s1.rollno);

  printf("Enter Student Name : ");
  scanf("%s",&s1.name);

  printf("Enter Student Address : ");
  scanf("%s",&s1.addre);

  printf("Enter Student Percentage : ");
  scanf("%f",&s1.per);

  
  //printf("Enter Student Details: "); 
 // scanf("%d %s %s %f",&s1.rollno,&s1.name,&s1.addre,&s1.per);
  
 printf("Student Details are = %d %s %s %f",s1.rollno,s1.name,s1.addre,s1.per);
  
 // s2=s1;
    
 // printf("\nS2=%d %s %s %f",s2.rollno,s2.name,s2.addre,s2.per);
   
  return 0;

}