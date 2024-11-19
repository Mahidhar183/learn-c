#include<stdio.h>
int sum(int num);
int main()
{
int num;
printf("Enter the n value\n");
scanf("%d",&num);
//sum(num);
printf("Sum of n natural numbers = %d\n",sum(num));
}
int sum(num)
{
int sum1=0;
if(num==0)
return num;
else
sum1=sum1+sum(num-1);
return(sum1);
}
