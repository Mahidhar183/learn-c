#include<stdio.h>
int main()
{
int i,j,t,c,largest,n;
printf("Enter the array size: ");
scanf("%d",&n);
int arr[n];
printf("Enter the array elements\n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
for(i=0,largest=0;i<n;i++)
{
for(t=arr[i],j=0,c=0;j<n;j++)
{
if(t<arr[j])
{
c++;
t=arr[j];
}
if(largest<c)
largest=c;
}
}
printf("Length of longest increasing sequence: %d\n",largest);
return 0;
}
