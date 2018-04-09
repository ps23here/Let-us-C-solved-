#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	char c;
	printf("THE ASCII VALUES AND THEIR EQUILENT CHARACTERS:\n");
	
	i=0;
	while(i>=0&&i<=255)
	{
		c=i;
		printf("ASCII VALUE:%d || CHARACTER:%c \n",i,c);
		i=i+1;
	}
	getch();
	clrscr();
}