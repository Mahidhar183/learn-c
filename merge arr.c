#include<stdio.h>
int main()
{
int arr1[50],arr2[50],i,n,n1,j,k;
printf("Enter the 1st and 2nd array size\n");
scanf("%d%d",&n,&n1);
printf("Enter the 1st array elements \n");
for(i=0;i<n;i++)
	scanf("%d",&arr1[i]);
printf("Enter the 2nd array elements \n");
for(i=0;i<n1;i++)
	scanf("%d",&arr2[i]);
for(i=n-1,j=0;i<n1+n;i++,j++)
	arr1[i+1]=arr2[j];
for(i=0;i<n+n1;i++)
	printf("%d ",arr1[i]);
printf("\n");
return 0;
}
