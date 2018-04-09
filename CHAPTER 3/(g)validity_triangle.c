#include<conio.h>
#include<stdio.h>
void main()
{
	float a,b,c,total;
	printf("ENTER THE 3 ANGLES OF THE TRIANGLE\n");
	scanf("%f%f%f",&a,&b,&c);
	total=a+b+c;
	if(total==180)
		printf("THE TOTAL ANGLE IS :\n %f \n THE TRIANGLE IS VALID",total);
	else
		printf("THE TOTAL ANGLE IS :\n %f \n THE TRIANGLE IS NOT VALID",total);
	getch();
	clrscr();
}