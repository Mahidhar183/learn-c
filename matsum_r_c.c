#include<stdio.h>
int main()
{
int mat[10][10],i,j,c,r,R,C,SR,SC;
printf("Enter the matrix size RxC \n");
scanf("%d%d",&R,&C);
printf("Enter the elements of an array\n");
for(i=0;i<R;i++)
{
	for(j=0;j<C;j++)
	{
		scanf("%d",&mat[i][j]);
	}
}
for(i=0;i<R;i++)
{
	for(j=0;j<C;j++)
	{
		printf("%d ",mat[i][j]);
	}
	printf("\n");
}
for(i=0,c=0;i<R;i++)
{
	for(j=0,r=0;j<C;j++)
	{
		r=r+mat[i][j];
	}
	c++;
	printf("Sum of row%d is %d\n",c,r);
}
for(i=0,c=0;i<R;i++)
{
	for(j=0,r=0;j<C;j++)
	{
		r=r+mat[j][i];
	}
	c++;
	printf("Sum of col%d is %d\n",c,r);
}
return 0;
}
