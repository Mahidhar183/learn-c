#include<stdio.h>
int main()
{
int arr[50],i,n,j,t;
printf("Enter the size of array\n");
scanf("%d",&n);
printf("Enter the array elements\n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
for(i=0,t=0;i<n;i++)
{
if(arr[i]>t)
t=arr[i];
}
for(i=0;i<n;i++)
{
if(t==arr[i])
//break;

printf("Largest Value :%d  It's Index is :%d \n",t,i);
}
return 0;

}
