#include<stdio.h>
int special(int num)
{
	int i,c;
	for(i=2,c=0;i<num;i++)
		if(num%i==0)
			c++;
	if(c==0)
		return(1);
	else
		return(0);
}
int even_or_odd(int num)
{
	if(num%2==0)
		return 1;
	else
		return 0;
}
int main()
{
	int i,id,c=0;
	char ch=0;
	for(i=0;ch!='n';i++)
	{
		printf("Enter Product ID: ");
		scanf("%d",&id);
		if(id>1000)
			printf("Warning:High Product ID!\n");
		if(special(id))
		{
			printf("The Product ID has Special Property\n");
			c++;
		}
		else
			printf("The Product ID does not have Special Property\n");
		if(even_or_odd(id))
			printf("The Product ID is Even\n");
		else
			printf("Product ID is Odd\n");
		printf("Do you want to check another product ID(y/n): ");
		scanf(" %c",&ch);
	}
	printf("Total product ID check: %d\n",i);
	printf("Total product ID's with special property: %d\n",c);
	return 0;
}
