#include<conio.h>
#include<stdio.h>
void main()
{
	int number,x,i,table;
	printf("ENTER THE NUMBER TO KNOW ITS TABLE TILL 10\n");
	scanf("%d",&number);
	for(x=number,i=1;i<=10;i++)
	{
		table=number*i;
		printf("%d X %d = %d\n",x,i,table);
	}
	getch();
	clrscr();
}
	