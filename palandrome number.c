#include<stdio.h>
int main()
{
int num,num1,i,rev;
printf("Enter a number ");
scanf("%d",&num);
for(i=num,rev=0;i>0;i=i/10)
{
num1=i%10;
rev=(rev+num1)*10;
}
if(rev/10==num)
printf("%d is a palandrome\n",num);
else 
printf("%d is not a palandrome \n",num);
return 0;
}
