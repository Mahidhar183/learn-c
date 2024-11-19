#include<stdio.h>
int main()
{
int num,i,a,res;
printf("Enter the number ");
scanf("%d",&num);
for(i=0;i<11;i++)
{
res=i*num;
printf("%d x %d = %d\n",num,i,res);
}
return 0;
}
