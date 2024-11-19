#include<stdio.h>
int main()
{
int arr[5],i,n,c=0,j;
printf("Enter the  array eles \n");
for(i=0;i<7;i++)
scanf("%d",&arr[i]);
printf("enter the ele to search \n");
scanf(" %d",&n);
printf("\n");
for(i=0;i<7;i++)
{
	if(n==arr[i])
		j++;
}
for(i=0;i<7;i++)
{
	if(n==arr[i])
	{
		if(j>0&&c==0)
			printf("%d is repeated %d times \n",arr[i],j);
		printf("it's %d one is :\n",c+1);
		printf("%d is present in array\n",arr[i]);
		printf("%u is it's address\n",&arr[i]);
		printf("%d is it's index\n",i);
		printf("\n");
		c++;
	}
}
if(c==0)
	printf("%d is not in array\n",n);
	return 0;
	}
