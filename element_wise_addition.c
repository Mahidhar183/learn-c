#include<stdio.h>
int main()
{
	int i,n1,n2,n;
	printf("Enter the two array sizes: ");
	scanf("%d%d",&n1,&n2);
	int a1[n1+n2],a2[n2+n1],a[n1+n2];
	printf("Enter array1 elements \n");
	for(i=0;i<n1;i++)
		scanf("%d",&a1[i]);
	printf("Enter array2 elements \n");
	for(i=0;i<n2;i++)
		scanf("%d",&a2[i]);
	if(n1<n2)
	{
		for(n=n1;n<n2;n++)
			a1[n]=0;
	}
	else
	{
		for(n=n2;n<n1;n++)
			a2[n]=0;
	}
	for(i=0;i<n1||i<n2;i++)
		a[i]=a1[i]+a2[i];
	printf("Resulting array: ");
	for(i=0;i<n1||i<n2;i++)
		printf("%d ",a[i]);
	printf("\n");
	return 0;
}
//for(i=0,j=0;
