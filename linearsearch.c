#include<stdio.h>
int main()
{
int arr[50],n,i,j,c=0,c1=0;
printf("enter the size of an array \n");
scanf("%d",&n);
printf("Enter the elements of array\n");
for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
printf("Enter the elements to search \n");
scanf("%d",&j);
for(i=0;i<n;i++)
	if(j==arr[i])
	c1++;
if(c1>1)
	printf("%d is reapted %d times \n",j,c1);
for(i=0;i<n;i++)
{
	if(j==arr[i])
	{
		printf("%d is its index \n",i);
		printf("its address is %u\n",&arr[i]);
		c++;
		if(c1>1)
			if(c1>c)
				printf("And also present in \n");
	}
}
if(c==0)
	printf("given element is not present in the list of array \n");
return 0;
}
