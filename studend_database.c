#include<stdio.h>
struct student
{
char name[30];
int age;
float marks;
};
int main()
{
struct student s[5];
int i;
printf("Enter the details of 5 students:\n\n");
for(i=0;i<5;i++)
{
printf("Student %d:\nName: ",i+1);
scanf(" %[^\n]",s[i].name);
printf("Age: ");
scanf("%d",&s[i].age);
printf("Marks: ");
scanf("%f",&s[i].marks);
printf("\n");
}
printf("--------------------------------------------------\n| NAME                          | AGE  | MARKS |\n--------------------------------------------------\n");
for(i=0;i<5;i++)
printf("| %-30s| %-5d| %-4.2f |\n",s[i].name,s[i].age,s[i].marks);
printf("--------------------------------------------------\n");
}
