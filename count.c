#include<stdio.h>
int main()
{
int num,c,a;
printf("Enter the number ");
scanf("%d",&num);
for(c=0,a=num;num>0;c++)
num =num/10;
printf("%d is a %d digit number\n",a,c);
return 0;
}
