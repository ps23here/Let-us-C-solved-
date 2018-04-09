#include<conio.h>
#include<stdio.h>
void main()
{
	char c;
	printf("ENTER ANY CHARACTER YOU LIKE\n");
	scanf("%c",&c);

	if(c>=65&&c<=90) 
	{
		printf("YOU ENTERED THE CHARACTER '%c'\n WHICH IS A CAPITAL LETTER",c);
	}
	else if(c>=97&&c<=122)
	{
		printf("YOU ENTERED THE CHARACTER '%c'\n WHICH IS A SMALL LETTER",c);
	}
		else if(c>=48&&c<=57)
	{
		printf("YOU ENTERED THE CHARACTER '%c'\n WHICH IS A NUMBER",c);
	}
	else if(c>=0&&c<=47||c>=58&&c<=64||c>=91&&c<=96||c>=123&&c<=127) 
	{
		printf("YOU ENTERED THE CHARACTER '%c'\n WHICH IS A SPECIAL SYMBOL",c);
	}
	
	getch();
	clrscr();
}



