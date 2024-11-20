#include<stdio.h>
int main()
{
int i,j,n,k,large;
printf("Enter the array size: ");
scanf("%d",&n);
int arr[n];
printf("Enter the arrray elements\n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
for(i=0,large=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(j!=i-1&&j!=i+1&&i!=j)
{
k=arr[i]+arr[j];
if(k>large)
{
large=k;
k=0;
}
}
}
}
printf("Maximum sum: %d\n",large);
return 0;
}
