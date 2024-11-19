#include<stdio.h>
int main()
{
int c1,num,sum,num1,num3,mul,c,num2;
printf("Enter a number ");
scanf("%d",&num);
for(num1=num,c=0;num1>0;c++)
	num1=num1/10;
for(mul=1,num3=num,sum=0;num>0;num=num/10)
{
	num2=num%10;
	for(mul=1,c1=0;c1<c;c1++)
	{
		mul=mul*num2;
	}
	sum=sum+mul;
}
if(sum==num3)
	printf("%d is a amstrong number\n",sum);
else 
	printf("%d is not a amstrong number \n",num3);
return 0;
}
