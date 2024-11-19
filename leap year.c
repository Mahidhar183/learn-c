#include<stdio.h>
void main()
{
int a;
printf("Enter a year ");
scanf("%d",&a);
if(a%4==0&&a%100!=0||a%400==0)
printf("%d is a leap year\n",a);
else
printf("%d is not a leap year\n ",a);
}

