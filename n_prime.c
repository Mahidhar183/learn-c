#include<stdio.h>
int main()
{
int n,num,i,j,c;
printf("Enter the n value (n = 1st n prime numbers)\n");
scanf("%d",&n);
if(n==0)
	printf("0 is neither prime nor composit");
for(i=1;i<=n;i++)
{
	for(j=1,c=0;j<=i;j++)
	{
		if(i%j==0)
			c++;
	}
	if(c<=2)
		printf("%d ",i);
}
printf("\n");
return 0;
}
