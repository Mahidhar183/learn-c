#include<stdio.h>
int main()
{
int str[50],l,i,j,c;
printf("Enter a string \n");
scanf("%l[^\n]",str);
for(l=0;str[l];l++);
printf("Length of string is %d\n",l);
for(i=0;str[i];i++)
{
	for(j=0,c=0;str[j];j++)
	{
		if(str[i]==str[j]&&j<i)
			break;
		if(str[i]==str[j])
			c++;
	}
	if(j>i)
		printf("Frequency of %c is %d \n",str[i],c);
}
return 0;
}
