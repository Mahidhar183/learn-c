#include<stdio.h>
void main()
{
float r,area,per,pi=3.141;
printf("enter the radius of circle = ");
scanf("%f",&r);
area = pi*r*r;
per = 2*pi*r;
printf("Area = %f\nPerimeter = %f\n",area,per);
}

