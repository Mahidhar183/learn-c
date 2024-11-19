#include<stdio.h>
int main()
{
char str1[50],str2[50],i,j;
printf("Enter a string \n");
scanf("%[^\n]",str1);
for(i=0;str1[i];i++)
str2[i]=str1[i];
str2[i]='\0';
printf("copy string is \n%s\n",str2);
return 0;
}
