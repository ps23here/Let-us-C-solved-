#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{
	float x,y,r,q;
	printf("ENTERT THE CARTESIAN CORDINATES X AND Y :\n");
	scanf("%f%f",&x,&y);
	r=sqrt(pow(x,2)+pow(y,2));
	q=atan(y/x);
	printf("CARTESIAN ANGLES :\n X:%f\n Y:%f\n POLAR CORDINATES:\n R:%f\n Q:%f\n",x,y,r,q);
	getch();
	clrscr();
}