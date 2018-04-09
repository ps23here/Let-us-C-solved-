#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
void factorial(int x);
void main()
{
	int number;
	printf("ENTER THE NUMBER OF WHICH YOU WANT TO GET THE FACTORIAL\n");
	scanf("%d",&number);
	factorial(number);
	getch();
	clrscr();
}
void factorial(int x)
{

	if(x%2==0)
	{
		for(;x%2==0;x=x/2)
	{
		printf("2\n");
		
	}
	
	}
	if(x%3==0)
	{
		for(;x%3==0;x=x/3)
	{
		printf("3\n");
		
	}
	}
	if(x%4==0)
	{
		for(;x%4==0;x=x/4)
	{
		printf("4\n");
		
	}
	}
	if(x%5==0)
	{
		for(;x%5==0;x=x/5)
	{
		printf("5\n");
		
	}
	}
	if(x%6==0)
	{
		for(;x%6==0;x=x/6)
	{
		printf("6\n");
		
	}
	}
	if(x%7==0)
	{
		for(;x%7==0;x=x/7)
	{
		printf("7\n");
		
	}
	}
	if(x%8==0)
	{
		for(;x%8==0;x=x/8)
	{
		printf("8\n");
		
	}
	}
	if(x%9==0)
	{
		for(;x%9==0;x=x/9)
	{
		printf("9\n");
		
	}
	}
	return;
}