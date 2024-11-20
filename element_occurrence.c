#include<stdio.h>
int main()
{
int arr[20],i,j,c,n;
printf("Enter the array size\n");
scanf("%d",&n);
printf("Enter array Elements\n");
for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
for(i=0;i<n;i++)
{
	for(j=0,c=0;j<n;j++)
	{
		if(arr[i]==arr[j])
		{
			if(i>j)
				break;
			c++;
		}
	}
	if(i<j)
		printf(" %d : %d\n",arr[i],c);
}
return 0;
}
