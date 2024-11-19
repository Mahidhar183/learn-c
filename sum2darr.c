#include<stdio.h>
int main()
{
int arr[50][50],j,i,i1,j1,sum=0;
printf("Enter the size of the 2D array (N N) 'number of elements will be nXn' \n");
scanf("%d%d",&i,&j);
printf("Enter the array elements\n");
for(i1=0;i1<i;i1++)
for(j1=0;j1<j;j1++)
scanf("%d",&arr[i1][j1]);
for(i1=0;i1<i;i1++)
{
for(j1=0;j1<j;j1++)
{
sum=sum+arr[i1][j1];
}
}
printf("Sum of all elements of 2d array = %d\n",sum);
return 0;
}
