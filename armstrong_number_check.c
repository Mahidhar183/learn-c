#include<stdio.h>
int arm(int n)
{
int i,j,pow,num,sum;
for(num=n,sum=0;n;n=n/10)
{
i=n%10;
for(j=3,pow=1;j>0;j--)
{
pow=pow*i;
}
sum = sum + pow;
}
if(sum==num)
return 1;
else 
return 0;
}
int main()
{
int num,c=0;
char ch;
while(ch!=' ')
{
printf("Enter a number: ");
scanf("%d",&num);
if(num>999||num<100)
printf("Alert:'Enter a 3 digit number\n");
else if(arm(num))
{
c++;
printf("%d is a armstrong number\n",num);
}
else
printf("%d is not a armstrong number\n",num);
scanf("%c",&ch);
}
printf("Total Armstrong numbers found: %d\n",c);
return 0;
}
