#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int a,b,x,y;
	printf("ENTER ANY 2 NUMBERS\n");
	scanf("%d%d",&a,&b);
	
	x=pow(a,b);
	y=pow(b,a);
	
	printf("THE VALUE OF A RAISED TO B IS:%d\nTHE VALUE OF B RAISED TO A IS:%d\n",x,y);
	
	getch();
	clrscr();
}