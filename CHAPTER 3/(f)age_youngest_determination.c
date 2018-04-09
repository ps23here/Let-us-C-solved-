#include<conio.h>
#include<stdio.h>
void main()
{
	int ram,shyam,ajay;
	printf("ENTER THE AGE'S OF RAM SHYAM AND AJAY\n");
	scanf("%d%d%d",&ram,&shyam,&ajay);

	if(ram<shyam&&ram<ajay)
		printf("RAM IS THE YOUNGEST");
	else if(shyam<ram&&shyam<ajay)
		printf("SHYAM IS THE YOUNGEST");
	else if (ajay<shyam&&ajay<ram)
		printf("AJAY IS THE YOUNGEST");
	getch();
	clrscr();
}