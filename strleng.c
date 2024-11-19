#include<stdio.h>
int main()
{
char str[50],i;
printf("Enter a string \n");
scanf("%[^\n]",str);
for(i=0;str[i];i++);
printf("String length is = %d \n",i);
return 0;
}
