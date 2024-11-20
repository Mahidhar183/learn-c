#include<stdio.h>
int main()
{
int n,c,i,e,o;
printf("Enter the size of an array: ");
scanf("%d",&n);
int arr[n];
printf("Enter the array elements\n");
for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
for(i=0,c=0;i<n;i++)
	if(arr[i]%2==0)
		c++;
int even[c],odd[n-c];
for(i=0,e=0,o=0;i<n;i++)
{
	if(arr[i]%2==0)
	{
		even[e]=arr[i];
		e++;
	}
	else
	{
		odd[o]=arr[i];
		o++;
	}
}
printf("Even array: ");
for(i=0;i<c;i++)
printf("%d ",even[i]);
printf("           Odd array: ");
for(i=0;i<n-c;i++)
	printf("%d ",odd[i]);
printf("\n");
return 0;
}
