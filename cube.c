#include<stdio.h>
int main()
{
int num,i,c,cube;
printf("Enter a number to find cube of it \n");
scanf("%d",&num);
for(i=0,cube =1;i<3;i++)
{
cube = cube * num;
}
printf("Cube of %d is %d \n",num,cube);
return 0;
}
