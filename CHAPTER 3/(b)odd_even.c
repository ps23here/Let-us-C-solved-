#include<conio.h>
#include<stdio.h>
void main()
{
	int a,value;
	printf("ENTER ANY NUMBER\n");
	scanf("%d",&a);
	value=a%2;
	if(value==0)
		printf("THE NUMBER %d IS EVEN",a);
	else
		printf("THE NUMBER %d IS ODD",a);
	getch();
	clrscr();
}