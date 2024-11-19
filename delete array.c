#include<stdio.h>
int main()
{
int arr[50],i,n,n1,j,c;
printf("Enter array size\n");
scanf("%d",&n);
printf("Enter the array elements \n");
for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
printf("Enter the element to be deleated \n");
scanf("%d",&n1);
for(i=0;i<n;i++)
	if(arr[i]==n1)
		c++;
		j=i;
if(c!=0)
{
for(j;j<n;j++)
	arr[j]=arr[j+1];
for(i=0;i<n-1;i++)
	printf("%d ",arr[i]);
printf("\n");
}
else
printf("Entered element is not in the list \n");
return 0;
}
