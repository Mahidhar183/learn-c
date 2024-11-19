#include<stdio.h>
int main()
{
int i,j,c,mat[3][3],matI[3][3];
printf("Enter the matrix elements \n");
for(i=0;i<3;i++)
	for(j=0;j<3;j++)
		scanf("%d",&mat[i][j]);
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		if(i==j)
			matI[i][j]=1;
		else 
			matI[i][j]=0;
	}
}
for(i=0,c=0;i<3;i++)
	for(j=0;j<3;j++)
		if(mat[i][j]==matI[i][j])
		c++;
if(c==9)
	printf("It is an identity matrix\n");
else 
	printf("It is not identity matrix\n");
return 0;
}

