#include<stdio.h>
int suma(int sum);
int main()
{
int n,sum;
printf("Enter the array size : \n");
scanf("%d",&n);
suma(sum);
printf("sum of array is %d\n",sum);
}
int suma(int sum)
{
int i,n,arr[5];
sum=0;
printf("enter the array elements \n");
for(i=0;i<n;i++)
	scanf(" %d",&arr[i]);
for(i=0;i<n;i++)
	sum+=arr[i];
return(sum);
}
