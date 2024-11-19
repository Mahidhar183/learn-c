#include<stdio.h>
int main()
{
	int n,arr[20],i,ele,j,m;
	printf("Enter the array size \n");
	scanf("%d",&n);
	printf("Enter the array elements \n");
	//ele = sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);

	/*printf("%ld\n",sizeof(arr));
	  printf("%ld\n",sizeof(arr[0]));
	  printf("%d\n",ele);*/

	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[i])
			{
				m=arr[j];
				arr[j]=arr[i];
				arr[i]=m;
			}
		}
	}
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
	return 0;
}

