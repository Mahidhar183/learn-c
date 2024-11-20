#include<stdio.h>
int main()
{
int i,j,k,n,c,t,c1;
printf("Enter array size : ");
scanf("%d",&n);
int arr[n];
printf("Enter array elements:\n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
for(i=0;i<n;i++)
{
if(arr[i]<0&&arr[i+1]<0)
{
for(j=i+1,c=0;j<n;j++)
{
if(arr[j]>0)
{
t=arr[j];
arr[j]=arr[i+1];
arr[i+1]=t;
c++;
}
if(c!=0)
break;
}
}
}
printf("Rearranged array : ");
for(i=0;i<n;i++)
printf("%d ",arr[i]);
printf("\n");
return 0;
}
