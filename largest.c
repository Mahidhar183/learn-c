#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter three numbers \n");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
	if(b>c)
	{
		printf("%d is large\n",a);
		printf("%d is small \n",c);
	}
	else if(c<a) 
		printf("%d is large \n%d is small\n",a,b);
	else 
		printf("%d is large \n%d is small\n",c,b);
}
else
{
	if(b<c)
		printf("%d is large \n%d is small\n",c,a);
	else if(a<c)
		printf("%d is large \n%d is small\n",b,a);
	else
		printf("%d is large \n%d is small\n",b,c);
}
}

