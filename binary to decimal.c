#include<stdio.h>
int main()
{
long int b,i,sum;
printf("Enter a binary number: \n");
scanf("%ld",&b);
for(b,i=1,sum=0;b;b=b/10,i=i*2)
if(b%10==1||b%10==0)
sum =sum+(b%10)*i;
else
{
printf("Enter a valid binary number\n");
break;
}
printf("decimal: %ld\n",sum);

return 0;
}
