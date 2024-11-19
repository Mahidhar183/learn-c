#include<stdio.h>
int main()
{
char str[50],rev[50],i,j,t;
printf("Enter a string\n");
scanf("%s",str);
for(i=0;str[i];i++);
for(j=0,t=i,i=i-1;j<t;i--,j++)
{
	rev[j]=str[i];
//printf("%c %d\n",str[i],i);
//printf("%c %d\n",rev[j],j);
}
rev[j]='\0';
//printf("%c\n",str[i]);
for(j=0;rev[j];j++)
{
	if(str[j]!=rev[j])
		break;
}
if(str[j]==rev[j])
	printf("It is a palandrome \n");
else 
	printf("It is not a palandrome\n");
return 0;
}
