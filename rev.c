#include<stdio.h>
int main()
{
int i,rev,num;
printf("Enter a number ");
scanf("%d",&num);
for(i=num,rev=0;i>0;i=i/10)
{
num=(i%10);
rev=(num+rev)*10;
}
printf("rev = %d\n",rev/10);
return 0;
}
