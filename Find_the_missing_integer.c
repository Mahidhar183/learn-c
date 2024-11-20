#include<stdio.h>
int main()
{
int i,j,k,n,t,c;
printf("enter the array size: ");
scanf("%d",&n);
int arr[n];
printf("Enter the array elements \n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(arr[i]<arr[j])
{
t=arr[j];
arr[j]=arr[i];
arr[i]=t;
}
}
}
printf("Missing integers : ");
for(k=arr[0]+1,i=1,c=0;i<n;k++)
{
if(k!=(arr[i])&&(i<n-1))
{
printf("%d ",k);
c++;
}
else i++;
}
if(c==0)
printf("NILL\n");
return 0;
}
