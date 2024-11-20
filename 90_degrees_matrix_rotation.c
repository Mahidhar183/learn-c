#include<stdio.h>
/*void rotate(int mat,int n1,int n2)
{
int i,j;
for(i=0;i<n1;i++)
{
for(j=n2;j>=0;j--)
{
printf("%d ",mat[j][i]);
}
printf("\n");
}
}*/
int main()
{
int n1,n2,i,j;
printf("Enter matrix size NxN form \n");
scanf("%d%d",&n1,&n2);
int mat[n1][n2];
printf("Enter matrix elments row wise \n");
for(i=0;i<n1;i++)
{
for(j=0;j<n2;j++)
{
scanf("%d",&mat[i][j]);
}
}
printf("Given matrix is :\n");
for(i=0;i<n1;i++)
{
for(j=0;j<n2;j++)
{
printf("%d ",mat[i][j]);
}
printf("\n");
}
printf("Rotated matrix is :\n");
//rotate(mat,n1,n2);
for(i=0;i<n2;i++)
{
for(j=n1-1;j>=0;j--)
{
printf("%d ",mat[j][i]);
}
printf("\n");

}
return 0;
}
