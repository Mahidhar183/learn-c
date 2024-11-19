#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the valuses of A, B, C ");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
if(a>c)
printf("Gratest among %d, %d, %d is %d \n",a,b,c,a);
else
printf("Gratest among %d, %d, %d is %d \n",a,b,c,c);
}
else
{
if(b>c)
printf("Gratest among %d, %d, %d is %d \n",a,b,c,b);
else
printf("Gratest among %d, %d, %d is %d \n",a,b,c,c);

}
return 0;
}
