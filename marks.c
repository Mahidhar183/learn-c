#include<stdio.h>
void main()
{
int M;
printf("Enter the marks obtained = ");
scanf("%d",&M);
if(M>=90)
printf("A Grade \n");
else if(M>=80)
printf("B Grade \n");
else if(M>=70)
printf("C Grade \n");
else if(M>=60)
printf("D Grade \n");
else 
printf("F Grade \n");
}
