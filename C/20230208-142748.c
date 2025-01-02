#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct employee
{
char name[20];
};
void bubble(struct employee *emp,int n)
{
int i,j;
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
struct employee temp;
if(strcmp(emp[j].name, emp[j+1].name) > 0)
{
temp = emp[j+1];
emp[j+1]=emp[j];
emp[j]=temp;
}
}
}
}
void main()
{
struct employee *emp=NULL,temp;
FILE *fp;
int i,j,n;
char name[20];
fp=fopen("employeebb.txt","r");
while(fscanf(fp,"%s",name)!=EOF)
n++;
emp=malloc(sizeof(struct employee)*n);
n=0;
rewind(fp);
while(fscanf(fp,"%s",emp[n].name)!=EOF)
n++;
fclose(fp);
bubble(emp,n);
fp=fopen("employeebb.txt","w");
for(i=0;i<n;i++)
fprintf(fp,"%s\n",emp[i].name);
fclose(fp);
}