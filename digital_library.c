#include<stdio.h>
struct book
{
char title[50];
char author[50];
float price;
};
int main()
{
int i;
struct book b[5];
printf("Enter the details of 5 books:\n");
for(i=0;i<5;i++)
{
printf("Book%d:\nTitle: ",i+1);
scanf(" %[^\n]",b[i].title);
printf("Author: ");
scanf(" %[^\n]",b[i].author);
printf("Price: ");
scanf(" %f",&b[i].price);
}
printf("Library Book List:\n");
printf("--------------------------------------------------------------------------------\n| Title                              |Author                         | Price   |\n--------------------------------------------------------------------------------\n");
for(i=0;i<5;i++)
printf("| %-35s| %-30s| %-7.2f |\n",b[i].title,b[i].author,b[i].price);
}
