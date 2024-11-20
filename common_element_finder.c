#include<stdio.h>
/*void del(int *a1,int *a2,int *n1,int *n2)
{
int i,j,k,c;
for(i=0,c=0;i<*n1-c;i++)
{
for(j=i;j<*n1-c;j++)
{
if(a1[i]==a1[j]&&(i>j))
{
for(k=0;k<*n1-c;k++)
a1[j]=a1[j+1];
j--;
c++;
}
}
}
*n1=*n1-c;
for(i=0,c=0;i<*n2-c;i++)
{
for(j=i;j<*n2-c;j++)
{
if(a2[i]==a2[j]&&(i>j))
{
for(k=0;k<*n1-c;k++)
a2[j]=a2[j+1];
j--;
c++;
}
}
}
*n2=*n2-c;
}*/
int main()
{
int i,j,c,n1,n2,k;
printf("Enter array1 and array2 size \n");
scanf("%d%d",&n1,&n2);
int arr1[n1],arr2[n2],arr[n1];
printf("Enter array 1 elements \n");
for(i=0;i<n1;i++)
scanf("%d",&arr1[i]);
printf("Enter array 2 elements \n");
for(i=0;i<n2;i++)
scanf("%d",&arr2[i]);
//del(&arr1,&arr2,&n1,&n2);
printf("Common Elements :");
for(i=0,c=0;i<n1;i++)
{
for(j=0;j<n2;j++)
{
if(arr1[i]==arr2[j])
{
arr[c]=arr1[i];
c++;
}
}
}
int c1;
for(i=0,c1=0;i<c-c1;i++)
{
for(j=0;j<c-c1;j++)
{
if(arr[i]==arr[j]&&(i>j))
{
for(k=j;k<c-c1;k++)
arr[k]=arr[k+1];
j--;
c1++;
}
}
}
for(i=0;i<c1+1;i++)
printf("%d ",arr[i]);
printf("\n");
return 0;
}
