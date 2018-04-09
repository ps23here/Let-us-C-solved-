#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{
	float temp,velocity,wcf,x;
	printf("ENTER THE TEMPRATURE AND WIND VELOCITY\n");
	scanf("%f%f",&temp,velocity);
	x=pow(velocity,0.16);
	wcf=35.74+(0.6215*temp)+(((0.4275*temp)-35.75)*x);
	printf("THE WIND CHILL FACTOR IS :%f",wcf);
	getch();
	clrscr();
}
	