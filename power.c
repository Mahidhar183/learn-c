#include<stdio.h>
int main()
{
int num,i,c,res;
printf("enter number ");
scanf("%d",&num);
printf("enter the power ");
scanf("%d",&i);
if(i==0)
printf("%d power %d is 1\n",num,i);
else
{
for(c=0,res=1;c<i;c++)
{
res=res*num;
}
printf("%d power %d is %d\n",num,i,res);
}
return 0;
}
