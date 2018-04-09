#include<conio.h>
#include<stdio.h>
void main()
{
	int year;
	printf("ENTER THE YEAR \n");
	scanf("%d",&year);
	
	(year%4==0&&year%100!=0||year%4==0&&year%100==0&&year%400==0 ? printf("THE YEAR %d IS A LEAP YEAR",year):printf("THE YEAR %d IS NOT A LEAP YEAR",year));
	
    getch();
	clrscr();
}