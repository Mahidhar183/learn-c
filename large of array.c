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
		for(j=0;j<n-1;j++)
		{
			if(arr[j]<arr[j+1])
			{
				m=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=m;
			}
		}
	}
	printf("largest of the array is = %d\n",arr[0]);
	return 0;
}

