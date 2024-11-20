#include<stdio.h>
struct employee
{
char name[30];
int id;
float salary;
};
int main()
{
int i;
struct employee r[5];
printf("Enter Employee details:\n");
for(i=0;i<5;i++)
{
printf("Employee %d:\nName: ",i+1);
scanf(" %[^\n]",r[i].name);
printf("ID: ");
scanf(" %d",&r[i].id);
printf("Sanlary: ");
scanf(" %f",&r[i].salary);
}
printf("-------------------------------------------------------\n| NAME                          | ID    | SALARY      |\n-------------------------------------------------------\n");
for(i=0;i<5;i++)
printf("| %-30s| %-6d| %-12.2f|\n",r[i].name,r[i].id,r[i].salary);
printf("-------------------------------------------------------\n");
return 0;
}
