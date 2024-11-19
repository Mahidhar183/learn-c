#include<stdio.h>
int main()
{
char str[50],i;
printf("Enter a string \n");
scanf("%[^\n]",str);
for(i=0;str[i];i++);
for(i;i>=0;i--)
	printf("%c",str[i]);
printf("\n");
printf("%c",str[i+1]);
return 0;
}
