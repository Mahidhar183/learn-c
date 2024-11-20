#include<stdio.h>
int main()
{
	int arr[50],n,i,pos;
	printf("enter the array size\n");
	scanf("%d",&n);
	printf("Enter the array elements \n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Enter number of possitions array to be shifted \n");
	scanf("%d",&pos);
	for(i=n;i>=0;i--)
	{
		arr[i]=arr[i-pos];
		if(i<pos)
			arr[i]=0;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}
