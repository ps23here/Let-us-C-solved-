#include<conio.h>
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("ENTER ANY 3 NUMBERS\n");
	scanf("%d%d%d",&a,&b,&c);
	
	(a>b&&a>c?printf("A IS THE GREATEST"):(b>a&&b>c?printf("B IS THE GRAETEST"):(c>a&&c>b?printf("C IS THE GREATEST"):printf("YOU ARE FROM PARLLEL UNIVERSE OR AN ALIEN"))));
	getch();
	clrscr();
}