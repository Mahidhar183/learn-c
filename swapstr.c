#include<stdio.h>
int main()
{
int str1[50],str2[50],i,j,t,l1,l2,l;
printf("Enter string 1 \n");
scanf("%l[^\n]",str1);
printf("Enter string 2 \n");
scanf(" %l[^\n]",str2);
for(l1=0;str1[l1];l1++);
for(l2=0;str2[l2];l2++);
l=l1>l2?l1:l2;
for(i=0,j=0;l;i++,j++,l--)
{
	t=str1[i];
	str1[i]=str2[j];
	str2[j]=t;
}
//for(i=0,j=0;str1[i]||str2[j];i++,j++)
printf("After swap string1 is\n%ls\nstring2 is\n%ls\n",str1,str2);
return 0;
}
