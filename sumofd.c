#include<stdio.h>
int main()
{
int i,sum,num,a;
printf("enter a number ");
scanf("%d",&num);
for(sum =0;num>0;num=num/10)
{
sum+=num%10;
}
printf("sum of digits = %d\n",sum);
return 0;
}
