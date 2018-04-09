#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,d,e,f,angle,radian,value,pi=3.14;
	printf("ENTER ANY ANGLE VALUE TO GET ITS TRIGONIMETRIC RATIOS\n");
	scanf("%d",&angle);
	radian=pi/180;
	value=radian*angle;
	a=sin(value);
	b=cos(value);
	c=tan(value);
	d=1/tan(value);
	e=1/cos(value);
	f=1/sin(value);
	printf("TRIGONOMETRIC RATIOS :\n SIN:%f \n COS:%f \n TAN:%f \n COT :%f \n SEC:%f \n COSEC:%f \n",a,b,c,d,e,f);
	getch();
	clrscr();
}
	