#include<stdio.h>
int main()
{
int arr[50],n,i,n1,j,pos;
printf("Enter the array size \n");
scanf("%d",&n);
printf("Enter array elements \n");
for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
printf("Before insert = ");
for(i=0;i<n;i++)
	printf("%d ",arr[i]);
printf("\n");
printf("Enter the element to insert and 'it's index to insert' \n");
scanf("%d%d",&n1,&pos);
printf("After inserting =");
for(j=(n-1);j>=pos;j--)
	arr[j+1]=arr[j];
for(i=0;i<=n;i++)
{
	if(i==pos)
		arr[i]=n1;
	printf("%d ",arr[i]);
}
printf("\n");
return 0;
}
