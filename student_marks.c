#include<stdio.h>
struct student
{
char name[30];
int rollno;
float marks;
};
int main()
{
int i;
struct student r[5];
printf("Enter details of 5 students:\n\n");
for(i=0;i<5;i++)
{
printf("Student %d:\nName: ",i+1);
scanf(" %[^\n]",r[i].name);
printf("Roll Number: ");
scanf(" %d",&r[i].rollno);
printf("Marks: ");
scanf(" %f",&r[i].marks);
printf("\n");
}
printf("------------------------------------------------------------\n| NAME                          | Roll No    | Marks       |\n------------------------------------------------------------\n");
for(i=0;i<5;i++)
printf("| %-30s| %-11d| %-12.2f|\n",r[i].name,r[i].rollno,r[i].marks);
printf("------------------------------------------------------------\n");
return 0;
}
