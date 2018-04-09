#include<conio.h>
#include<stdio.h>
void main()
{
	char c;
	printf("ENTER ANY CHARACTER YOU LIKE\n");
	scanf("%c",&c);
	
	(c>=65&&c<=90?printf("YOU ENTERED THE CHARACTER '%c'\n WHICH IS A CAPITAL LETTER",c):(c>=97&&c<=122?printf("YOU ENTERED THE CHARACTER '%c'\n WHICH IS A SMALL LETTER",c):printf("YOU ENTERED THE CHARACTER '%c'\n WHICH IS NOT A LETTER",c)));
	getch();
	clrscr();
}
	