#include<stdio.h>
int main()
{
int i,n,a,b;
printf("starting number of the series ");
scanf("%d",&a);
b=a+1;
printf("enter the number of digits ");
scanf("%d",&n);
printf("series = %d %d ",a,b);
for(a,b,n=n-2;n!=0;n--)
{
i=a+b;
printf("%d ",i);
a=b;
b=i;
}
printf("\n");
return 0;
}
