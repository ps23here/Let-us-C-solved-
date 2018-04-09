#include<stdio.h>
#include<conio.h>
void main()
{
	int hour,op,rate=12;
	printf("THE DATA ABOUT HOURS OF WORK OF EMPLOYEE AND THIER OVER TIME PAY:\n");
	
	hour=1;
	while(hour<=10)
	{
		op=rate*hour;
		printf("THIS EMPLOYEE WORKED FOR %d HOURS AND OVER-TIME PAY IS: RS. %d\n",hour,op);
		hour=hour+1;
	}
	getch();
	clrscr();
}
