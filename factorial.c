#include<stdio.h>
int main()
{
int fact=1,num,a;
printf("Enter a number ");
scanf("%d",&num);
a=num;
if(num==0)
printf("1\n");
else
while(num>0)
{
fact=fact*num;
num--;
}
printf("Factorial of %d is %d \n",a,fact);
return 0;
}
