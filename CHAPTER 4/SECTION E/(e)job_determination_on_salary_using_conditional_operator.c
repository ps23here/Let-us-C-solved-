#include<conio.h>
#include<stdio.h>
void main()
{
	float sal;
	printf("ENTER THE SALARY\n");
	scanf("%f",&sal);
	
	(sal>25000&&sal<=40000?printf("MANAGER\n"):(sal>=15000&&sal<25000)?printf("ACCOUNTANT\n"):printf("CLERK"));
	getch();
	clrscr();
}