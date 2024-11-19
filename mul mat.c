#include<stdio.h>
int main()
{
int mul[4][4],mat1[4][4],mat2[4][4],i1,i2,j1,j2,i,j;
printf("Enter the elements of 3x3 matrix-1 in row wise \n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
		scanf("%d",&mat1[i][j]);
}
printf("Enter the elements of 2nd 3x3 matrix in row wise \n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
		scanf("%d",&mat2[i][j]);
}
printf("Matrix-1 is :\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
		printf("%d    ",mat1[i][j]);
	printf("\n");
}
printf("Matrix-2 is :\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
		printf("%d    ",mat2[i][j]);
	printf("\n");
}
printf("matrix-1 X matrix-2 is\n");
mul[0][0]=0;
mul[1][0]=0;
mul[2][0]=0;
	for(i=0,i1=0;i1<3;i1++,i++)
	{
		
		for(j2=0,j=0;j2<3;j2++,j++)
		{
			for(i2=0,j1=0;j1<3;j1++,i2++)
			{
			mul[i][j]=(mat1[i1][j1]*mat2[i2][j2])+mul[i][j];
			}
		mul[i][j+1]=0;
		}
	}
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
		printf("%d    ",mul[i][j]);
	printf("\n");
}
return 0;
}
