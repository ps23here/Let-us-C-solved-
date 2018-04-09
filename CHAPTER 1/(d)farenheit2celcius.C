#include<conio.h>
#include<stdio.h>
void main()
{
	float temp,c_temp;
	printf("ENTER TEMP.IN FARENHEIT"\n");
	scanf("%f",&temp);
	c_temp=(temp-32)*5/9;
	printf("THE TEMP. IN CENTIGRADE IS %f",c_temp);
	getch();
}