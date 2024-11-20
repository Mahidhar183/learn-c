#include<stdio.h>
int kth_smallest(const int *arr,int n,int k)
{
	int i,j,c;
	for(i=0;i<n;i++)
	{
		for(j=0,c=0;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				c++;
			}
		}
		if(c==(k-1))
			break;
	}
	return(arr[i]);
}
int main()
{
	int i,n,k;
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Enter the Kth number: ");
	scanf("%d",&k);
	printf("%dth smallest element is: %d\n",k,kth_smallest(arr,n,k));
	return 0;
}
