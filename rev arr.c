#include<stdio.h>
int main()
{
int arr[50],x,n,i,j;
printf("Enter the size of an array\n");
scanf("%d",&n);
printf("Enter the array elements \n");
for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
for(i=0,j=n-1;i<j;i++,j--)
{
	x=arr[i];
	arr[i]=arr[j];
	arr[j]=x;
}
for(i=0;i<n;i++)
	printf("%d ",arr[i]);
printf("\n");
return 0;
}
