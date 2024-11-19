#include<stdio.h>
int main()
{
int mat1[3][3],mat[3][3],i,j,c=0;
printf("Enter the matrix 3x3 \n");
for(i=0;i<3;i++)
	for(j=0;j<3;j++)
		scanf("%d",&mat[i][j]);
printf("Matrix is :\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
		printf("%d ",mat[i][j]);
	printf("\n");
}
printf("\n");
for(j=0;j<3;j++)
{
	for(i=0;i<3;i++)
	{
		mat1[i][j]=mat[i][j];
		printf("%d ",mat1[i][j]);
	}
	printf("\n");
}
for(i=0;i<3;i++)
	for(j=0;j<3;j++)
if(mat1[i][j]==mat[i][j])
	c++;
if(c==9)
	printf("it is a symetric matrix \n");
else 
	printf("Hence its transpose is not equal to matrix so it is  not a symetric\n");
	return 0;
	}
