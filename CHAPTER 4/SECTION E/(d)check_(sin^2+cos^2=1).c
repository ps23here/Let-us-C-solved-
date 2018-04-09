#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{
	float angle,x;
	printf("ENTER THE ANGLE\n");
	scanf("%f",&angle);
	x=pow(sin(angle),2)+pow(cos(angle),2);
	

	 (x==1?printf("THE SUM OF SQUARES OF SINE AND COSINE IS 1"):printf("THE SUM OF SQUARES OF SINE AND COSINE IS NOT 1"));
	 getch();
	 clrscr();
}