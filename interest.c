#include<stdio.h>
int main()
{
int T,P;
float R,I;
printf("Enter the Principle amount : ");
scanf("%d",&P);
printf("Enter the Rate of interest(in %) : ");
scanf("%f",&R);
printf("Enter the Time period (in months) : ");
scanf("%d",&T);
I = (float)((T*R*P)/1200);
printf("Interest for %d at %f for %d months is %f\n",P,R,T,I);
return 0;
}
