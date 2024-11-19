#include<stdio.h>
int main()
{
int num;
printf("Enter a number: ");
scanf("%d",num);
if(num>0)
printf("%d is positive\n");
else if(num<0)
printf("%d is a negative number\n");
else 
printf("%d is equal to 0\n");
return 0;
}
