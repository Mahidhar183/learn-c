#include<stdio.h>
int pal(int n)
{
int j,num;
for(num=n,j=0;n;n=n/10)
j=j*10+n%10;
if(j==num)
return 1;
else
return 0;
}
int main()
{
int num,i=0;
char ch;
while(ch!=' ')
{
printf("Enter a number: ");
scanf("%d",&num);
if(num<0)
printf("Alert: 'Entered a negative number'\n");
if(pal(num))
{
i++;
printf("%d is a palindrome\n",num);
}
else
printf("%d is not a palindrome\n",num);
scanf("%c",&ch);
}
printf("Total number of palindrome found: %d\n",i);
return 0;
}
