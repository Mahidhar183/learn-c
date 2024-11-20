#include<stdio.h>
int fact(int n)
{
int i,f;
for(i=1,f=1;i<=n;i++)
f=f*i;
return(f);
}
int main()
{
int num,c=0;
char ch;
while(ch!=' ')
{
printf("Enter a number: ");
scanf("%d",&num);
if(num<0)
printf("Invalid Input: Enter a Positive Number \n");
else if(num==0)
{
printf("Factorial of %d is 1\n",num);
c++;
}
else
{
printf("Factorial of %d is %d\n",num,fact(num));
c++;
}
scanf("%c",&ch);
}
printf("Total Factorials calculated: %d\n",c);
return 0;
}
