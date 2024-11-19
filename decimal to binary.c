#include<stdio.h>
int main()
{
int num,i,pos;
printf("Enter a number \n");
scanf("%d",&num);
for(pos=31;pos>=0;pos--)
{
printf("%d",num>>pos&1);
if(pos%8==0)
printf(" ");
}
printf("\n");
return 0;
}
