#include<stdio.h>
int main()
{
char str1[50],str2[50],i,j;
printf("Enter string 1\n");
scanf("%[^\n]",str1);
printf("Enter string 2\n");
scanf(" %[^\n]",str2);
for(i=0;str1[i];i++);
for(i,j=0;str2[j];i++,j++)
str1[i]=str2[j];
str1[i]='\0';
printf("%s",str1);
printf("\n");
return 0;
}
