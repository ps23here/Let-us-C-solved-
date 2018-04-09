#include<conio.h>
#include<stdio.h>
void main()
{
	int number,a,b,c,d,e,reverse=0,x;
	printf("ENTER ANY 5 DIGIT NUMBER\n");
	scanf("%d",&number);
	x=number;
	
	a=number%10;
	reverse=reverse+(10000*a);
	number=number/10;
	
	b=number%10;
	reverse=reverse+(10000*b);
	number=number/10;
	
	c=number%10;
	reverse=reverse+(10000*c);
	number=number/10;
	
	d=number%10;
	reverse=reverse+(10000*d);
	number=number/10;
	
	e=number%10;
	reverse=reverse+(10000*e);
	number=number/10;
	
	if(number==reverse)
		printf("THE ORIGINAL NUMBER IS :\n %d THE REVERSED NUMBER IS :\n %d \n THE ORIGINAL NUMBER IS EQUAL TO THE REVERSED NUMBER",x,reverse);
	else
		printf("THE ORIGINAL NUMBER IS :\n %d THE REVERSED NUMBER IS :\n %d \n THE ORIGINAL NUMBER IS NOT EQUAL TO THE REVERSED NUMBER",x,reverse);
	getch();
	clrscr();
}