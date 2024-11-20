#include<stdio.h>
int main()
{
int i,j,k,n,p,a[10];
printf("Enter number of rows: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0,a[0]=1,a[j]=0;j<i+1;j++)
{
a[j]=a[0]+a[j];
}
}
return 0;
}
