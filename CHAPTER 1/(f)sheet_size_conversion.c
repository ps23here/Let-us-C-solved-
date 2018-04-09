#include<stdio.h>
#include<conio.h>
void main()
{
	int a0,a1,a2,a3,a4,a5,a6,a7,a8,l,b;
	l=1189;
	b=841;
	a0=l*b;
	a1=b*(l/2);
	a2=(l/2)*(b/2);
	a3=(b/2)*(l/4);
	a4=(l/4)*(b/2);
	a5=(b/2)*(l/8);
	a6=(l/8)*(b/4);
	a7=(b/4)*(l/16);
	a8=(l/16)*(b/8);
	printf("THE SIZES OF PAPERS ARE: \n A0:%d \n A1:%d \n A2:%d \n A3:%d \n A4:%d \n A5:%d \n A6:%d \n A7:%d \n A8:%d \n",a0,a1,a2,a3,a4,a5,a6,a7,a8);
	getch();
	clrscr();
}
	
	