#include<stdio.h>
int main()
{
int t,i,j,n1,n2;
printf("Enter the size of array 1 and array 2\n");
scanf("%d%d",&n1,&n2);
printf("Enter the elements of sorted array1\n");
int arr1[n1+n2],arr2[n2];
for(i=0;i<n1;i++)
	scanf("%d",&arr1[i]);
printf("Enter the elements of sorted array2 \n");
for(i=0;i<n2;i++)
	scanf("%d",&arr2[i]);
for(j=0;j<n1+n2;j++)
{
	arr1[n1+j]=arr2[j];
}
for(i=0;i<n1+n2;i++)
{
for(j=0;j<n1+n2;j++)
{
if(arr1[i]<arr1[j])
{
t=arr1[i];
arr1[i]=arr1[j];
arr1[j]=t;
}
}
}
for(i=0;i<n1+n2;i++)
printf("%d ",arr1[i]);
printf("\n");
return 0;
}
