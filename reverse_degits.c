#include<stdio.h>
int rev(int n)
{
	int num;
	for(num=0;n;n=n/10)
		num=num*10+n%10;
	return(num);
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
			printf("Invalid input! please enter a positive number\n");
		else
		{
			printf("Reversed number: %d\n",rev(num));
			c++;
		}
		scanf("%c",&ch);
	}
	printf("Total numbers reversed: %d\n",c);
	return 0;
}
