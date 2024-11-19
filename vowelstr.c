#include<stdio.h>
int main()
{
char str[50],i,c,j;
printf("Enter a string \n");
scanf("%[^\n]",str);
for(i=0;str[i];i++)
for(j=0,c=0;j<=i;j++)
{
if(str[j]=='a'||str[j]=='e'||str[j]=='i'||str[j]=='o'||str[j]=='u'||str[j]=='A'||str[j]=='E'||str[j]=='I'||str[j]=='O'||str[j]=='U')
c++;
}
printf("Total vowels in string are %d \n",c);
return 0;
}
