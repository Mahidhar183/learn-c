#include<stdio.h>
int main()
{
int str[50],t,i,j;
printf("Enter a string \n");
scanf("%l[^\n]",str);
for(i=0;str[i];i++)
{
for(j=0;str[j];j++)
{
if(str[i]<str[j])
{
t=str[i];
str[i]=str[j];
str[j]=t;
}
}
}
printf("After sort is %ls \n",str);
return 0;
}
