#include<conio.h>
#include<stdio.h>
void main()
{
	float distance,m,f,i,c;
	printf("ENTER THE DISTANCE IN KILOMETER\n");
	scanf("%f",&distance);

	m=distance*1000;
	f=3280*distance;
	i=39370*distance;
	c=100000*distance;
	printf("THE DISTANCE IN \n METER:%f\n FEET :%f \n INCH:%f \n CENTIMETER:%f \n",m,f,i,c);
	getch();
	clrscr();
}