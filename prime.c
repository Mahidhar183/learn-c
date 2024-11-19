#include<stdio.h>
int main()
{
int a,i,c;
printf("Enter a number ");
scanf("%d",&i);
for(a=1,c=0;a<i;a++)
{
if(i%a==0)
c++;
}
if(i==1)
printf("is neither prime nor compos\n");
if(c==1)
printf("%d is a prime number \n",i);
else if(i!=1) 
printf("%d is not a prime\n",i);
}
