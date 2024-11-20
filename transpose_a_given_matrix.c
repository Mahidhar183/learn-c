#include<stdio.h>
void transpose(int n,int mat[][n])
{
int i,j;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("%d ",mat[j][i]);
}
printf("\n");
}
}
int main()
{
int i,j,n;
printf("Enter the number of row a matrix : ");
scanf("%d",&n);
int mat[n][n];
printf("Enter the matriz elements \n");
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&mat[i][j]);
transpose(n,mat);
return 0;
}
