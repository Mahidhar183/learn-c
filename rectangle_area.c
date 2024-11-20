#include<stdio.h>
struct rectangle
{
float length;
float width;
};
int main()
{
struct rectangle r[5];
int i;
printf("Enter details of 5 Rectangles:\n\n");
for(i=0;i<5;i++)
{
printf("Rectangle %d:\nlength: ",i+1);
scanf("%f",&r[i].length);
printf("Width: ");
scanf("%f",&r[i].width);
printf("\n");
}
printf("-------------------------------------\n| Rectangle | Length | Width | Area |\n-------------------------------------\n");
for(i=0;i<5;i++)
printf("|%-11d|%-8.2f|%-7.2f|%-6.2f|\n",i+1,r[i].length,r[i].width,r[i].length*r[i].width);
printf("----------------------------------------\n");
}
