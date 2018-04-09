#include<conio.h>
#include<stdio.h>
void main()
{
	float x,y;
	printf("ENTER THE CO-ORDINATES OF THE POINT\n");
	scanf("%f%f",&x,&y);
	if(x==0&&y==0)
		printf("THE POINT LIES ON THE ORIGIN");
	
	else if(x==0)
		printf("THE POINT LIES ON THE Y AXIS");

	else if(y==0)
		printf("THE POINT LIES ON THE X AXIS");

	else
		printf("THE POINT LIES SOMWHERE ON THE PLANE EXCEPT X AXIS,Y AXIS AND ORIGIN");
	getch();
	clrscr();
}
	