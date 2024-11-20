#include<stdio.h>
int main()
{
int i,j,large,sum,n;
printf("Enter the array size: ");
scanf("%d",&n);
int arr[n];
printf("Enter the array elements \n");
for (i=0;i<n;i++)
scanf("%d",&arr[i]);
for(i=0,large =0;i<n;i++)
{
for(j=i,sum=0;j<n;j=j+2)
{
sum =sum + arr[j];
}
if(large<sum)
large=sum;
}
printf("maximum non adjacent sum: %d\n",large);
return 0;
}
