#include<stdio.h>
int main()
{
float C,F,min=0,tem,max=0,sum=0,avg;
char ch,ch1;
int i;
for(i=0;ch!='n';i++)
{
	printf("Enter the temperature with units (F or C): ");
	scanf("%f %c",&tem,&ch1);
	if(ch1=='C')
	{
		F=(float)9/5;
		F=F*tem+32;
			if(tem>100)
				printf("Warning:HIGH TEMPERATURE\n");
		printf("Converted Temperature: %.2fF\n",F);
	}
	if(ch1=='F')
	{
		C=(float)5/9;
		C=(tem-32)*C;
			if(tem>100)
				printf("Warning:HIGH TEMPERATURE\n");
		printf("Converted Temperature: %.2fC\n",C);
		F=C;
	}
	if(i==0)
		min=F;
	if(F>max&&F>=min)
		max=F;
	if(F<min)
		min=F;
	sum=sum+F;
	printf("Do you want to enter another Temperature?(y/n): ");
	scanf(" %c",&ch);
}
avg=sum/i;
printf("Total readings: %d\n",i);
printf("Average Temperature: %.2fF\n",avg);
printf("Minimum Temperature: %.2fF\n",min);
printf("Maximum Temperature: %.2fF\n",max);
return 0;
}
