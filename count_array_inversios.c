#include<stdio.h>
int inversions(int *arr,int n)
{
	int i,j,c,inv;
	for(i=0,inv=0;i<n;i++)
	{
		for(j=0,c=0;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				c++;
			}
		}
		if(inv<c)
		{
			inv=c;
		}
	}
	return(inv);
}
int main()
{
	int i,n;
	printf("enter the array size : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Total inversions = %d\n",inversions(arr,n));
	return 0;
}
