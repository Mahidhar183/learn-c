#include<stdio.h>
int main()
{
int i,n,j,c,k;
printf("Enter the array size\n");
scanf("%d",&n);
int arr[n];
printf("Enter array elements\n");
for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
for(i=0,c=0;i<n-c;i++)
{
	for(j=i;j<n-c;j++)
	{
		if(arr[i]==arr[j]&&(i<j))
		{
			for(k=j;k<n;k++)
				arr[k]=arr[k+1];
			j--;
			c++;
		}
	}
}
printf("Unique array: ");
for(i=0;i<n-c;i++)
printf("%d ",arr[i]);
printf("\nnew array length is %d\n",(n-c));
return 0;
}
