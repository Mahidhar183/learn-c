#include<stdio.h>
int main()
{
int mat[3][3],i,j,sum=0;
printf("Enter the matrix 3x3 \n");
for(i=0;i<3;i++)
	for(j=0;j<3;j++)
		scanf("%d",&mat[i][j]);
printf("Given matrix is \n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
		printf("%d ",mat[i][j]);	
printf("\n");
}
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
		if(i==j)
			sum=sum+mat[i][j];
}
for(i=0;i<3;i++)
{
	for(j=2;j>=0;j--)
		if(i==j)
			sum = sum+mat[i][j];
}
sum =sum-mat[1][1];
printf("Sum of the main diagonals is %d\n",sum);
return 0;
}
