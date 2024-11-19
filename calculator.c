#include<stdio.h>
void main()
{
int a,b,c,sum,sub,mul,div;
printf("Enter the numbers ");
scanf("%d%d",&a,&b);
printf("operation is 1)'+' 2)'-' 3)'*' 4)'/'\n");
scanf("%d",&c);
if(c==1)
printf("%d\n",a+b);
else if(c==2)
printf("%d\n",a-b);
else if(c==3)
printf("%d\n",a*b);
else if(c==4)
printf("%d\n",a/b);
}
