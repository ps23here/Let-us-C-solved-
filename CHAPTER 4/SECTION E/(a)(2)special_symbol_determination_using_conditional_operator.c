#include<conio.h>
#include<stdio.h>
void main()
{
	char c;
	printf("ENTER ANY CHARACTER YOU LIKE\n");
	scanf("%c",&c);
	
	(c>=0&&c<=47||c>=58&&c<=64||c>=91&&c<=96||c>=123&&c<=127?printf("YOU ENTERED THE CHARACTER '%c'\n WHICH IS A SPECIAL SYMBOL",c):printf("YOU ENTERED THE CHARACTER '%c'\n WHICH IS NOT A SPECIAL SYMBOL",c));
	getch();
	clrscr();
}