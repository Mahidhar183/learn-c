#include<stdio.h>
int main()
{
int i,j,mat1[3][3],mat2[3][3],sum[3][3];
printf("Enter the matrix[3x3] 1 elements row wise\n");
for(i=0;i<3;i++)
	for(j=0;j<3;j++)
		scanf("%d",&mat1[i][j]);
printf("Enter the matrix[3x3] 2 elements row wise\n");
for(i=0;i<3;i++)
	for(j=0;j<3;j++)
		scanf("%d",&mat2[i][j]);
printf("Matrix 1 is : \n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
		printf("%d ",mat1[i][j]);
	printf("\n");
}
printf("Matrix 2 is\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
		printf("%d ",mat2[i][j]);
printf("\n");
}
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{	
		sum[i][j]=mat1[i][j]+mat2[i][j];
	}
printf("\n");
}
printf("Sum of two matrix is :\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{	
		printf("%d ",sum[i][j]);
	}
printf("\n");
}
return 0;
}
