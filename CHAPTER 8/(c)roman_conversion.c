#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
char roman(int x);
void main()
{
	int year;
	printf("ENTER THE YEAR WHICH YOU WANTED CONVRTED IN ROMAN NUMERALS\n");
	scanf("%d",&year);
	roman(year);
	getch();
	clrscr();
}
char roman(int x)
{
	
	int z;
	char a,b,c,d,p,q,r,s;
	z=x;
	switch(z/1000)
	{
		case 1:
		a='M';
		break;

		case 2:
		a='MM';
		break;

		case 3:
		a='MM';
		p='M';
		break;

	}
	z=z%10;
	switch(z/100)
	{
		case 1:
		b='C';
		break;

		case 2:
		b='CC';
		break;

		case 3:
		b='CC';
		q='C';
		break;

		case 4:
		b='CD';
		break;

		case 5:
		b='D';
		break;

		case 6:
		b='DC';
		break;

		case 7:
		b='DC';
		q='C';
		break;

		case 8:
		b='DC';
		q='CC';
		break;

		case 9:
		b='CM';
		break;


	}
	z=z%10;
	switch(z/10)
	{
		case 1:
		c='X';
		break;

		case 2:
		c='XX';
		break;

		case 3:
		c='XX';
		r='X';
		break;

		case 4:
		c='XL';
		break;

		case 5:
		c='L';
		break;

		case 6:
		c='LX';
		break;

		case 7:
		c='LX';
		r='X';
		break;

		case 8:
		c='LX';
		r='XX';
		break;

		case 9:
		c='XC';
		break;


	}
	z=z%10;
	switch(z)
	{
		case 1:
		d='I';
		break;

		case 2:
		d='II';
		break;

		case 3:
		d='II';
		s='I';
		break;

		case 4:
		d='IV';
		break;

		case 5:
		d='V';
		break;

		case 6:
		d='VI';
		break;

		case 7:
		d='VI';
		s='I';
		break;

		case 8:
		d='VI';
		s='II';
		break;

		case 9:
		d='IX';
		break;


	}
	printf("THE ROMAN CONVERSION IS:\n%c%c%c%c%c%c%c%c",a,p,b,q,c,r,d,s);
return 0;
}