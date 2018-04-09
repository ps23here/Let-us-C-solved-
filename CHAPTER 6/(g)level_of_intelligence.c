#include<stdio.h>
#include<conio.h>
void main()
{
	int y;
	float x,i;
	printf("TABLE RELEATED TO LEVEL OF INTELLIGENCE\n");
	for(y=1;y>0&&y<7;y++)
	{
		for(x=0.5;x>=0.5&&x<=12.5;x=x+0.5)
		{
			i=2+(y+(0.5*x));
			printf("I=%d FOR Y=%d AND X=%d\n",i,y,x);
		}
	}
	getch();
	clrscr();
}