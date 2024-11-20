#include<stdio.h>
int main()
{
int i,n,j,k,c,large;
printf("Enter the array size: ");
scanf("%d",&n);
int arr[n];
printf("Enter array elements \n");
for(i=0,large=0;i<n;i++)
	scanf("%d",&arr[i]);
for(i=0;i<n;i++)
{
	for(k=arr[i],j=0,c=1;j<n;j++)
	{
		if(k-arr[j]==-1)
		{
			c++;
			k=arr[j];
			j=0;
		}
	}
	if(large<c)
		large=c;
}
printf("Length of Longest consecutive sequence: %d\n",large);
return 0;
}
