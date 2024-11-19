#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter two numbers ");
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf("after swaping %d and %d \n",a,b);
}
