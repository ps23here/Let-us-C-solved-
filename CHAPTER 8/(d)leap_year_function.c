#include<stdio.h>
#include<conio.h>
void leap_year(int year);
void main()
{
	int y;
	printf("ENTER THE YEAR \n");
	scanf("%d",&y);
	leap_year(y);
	getch();
	clrscr();
	
}
void leap_year(int year)
{
	if(year%4==0&&year%100!=0||year%4==0&&year%100==0&&year%400==0)
	   printf("THE YEAR %d IS A LEAP YEAR",year);
    else
		printf("THE YEAR %d IS NOT A LEAP YEAR",year);
}

