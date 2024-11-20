#include<stdio.h>
int main()
{
int arr[20],sym[20],i,n,j;
printf("enter the array size\n");
scanf("%d",&n);
printf("Enter the array elements \n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
for(i=0,j=n-1;i<n;i++,j--)
sym[i]=arr[j];
//for(i=0;i<n;i++)
//printf("%d ",sym[i]);
for(i=0,j=0;i<n;i++)
{
if(arr[i]!=sym[i])
j++;
}
if(j==0)
printf("Array is Symmetric\n");
else 
printf("Array is not Symmetric\n");
return 0;
}
