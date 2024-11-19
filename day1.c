#include<stdio.h>
void main()
{
float a,b;
int sum,diff,pro;
float div;
printf("enter two numbers ");
scanf("%f%f",&a,&b);
pro = a*b;
sum = a+b;
diff = b-a;
div = (b/a);
printf("Sum of numbers = %d\nDifference = %d\nQuotient = %f\nproduct = %d\n",sum,diff,div,pro);
}
