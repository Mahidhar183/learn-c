#include<stdio.h>
void main()
{
float mass,height;
float BMI;
printf("enter Weigth in KG's = ");
scanf("%f",&mass);
printf("\nEnter height in meaters = ");
scanf("%f",&height);
BMI = (float)mass/(height*height);
if(BMI<18.5)
printf("  'YOU ARE UNDER WEIGHT'\n");
else if(BMI>18.4&&BMI<26)
printf("  'YOR ARE HEALTHY'\n");
else if(BMI>25&&BMI<30)
printf("  'YOU ARE OVER WEEIGHT'\n");
else
printf("  'YOU ARE OBESED'\n");
printf("BMI value = %f\n",BMI);
printf("BMI VALUES ARE: \nunder weight   = <18.5\nnormal/healthy = 18.5-25\nover weight    = 25-30\nobesed         = 30<\n");
}
