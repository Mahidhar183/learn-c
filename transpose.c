#include<stdio.h>
void main()
{
int arr[3][3],i,j;
printf("enter the 3x3 matrix row wise \n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		scanf("%d",&arr[i][j]);
	}
}
printf("given matrix is\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("%d ",arr[i][j]);
	}
printf("\n");
}
printf("It's transpose is \n");
for(j=0;j<3;j++)
{
	for(i=0;i<3;i++)
		printf("%d ",arr[i][j]);
printf("\n");
}
}
