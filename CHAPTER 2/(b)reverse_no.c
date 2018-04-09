#include<stdio.h>
#include<conio.h>
void main()
{
	int num,reverse=0,a,x,b,c,d,e;
	
	printf("ENTER THE FIVE DIGIT NUMBER PLEASE!!\n");
	scanf("%d",&num);
	
	x=num;
	
	a=num%10;
	reverse=reverse+(a*10000);
	num=num/10;

	b=num%10;
	reverse=reverse+(b*1000);
	num=num/10;

	c=num%10;
	reverse=reverse+(c*100);
	num=num/10;

	d=num%10;
	reverse=reverse+(d*10);
	num=num/10;

	e=num%10;
	reverse=reverse+(e*1);
	num=num/10;
	
	printf("ORIGINAL NUMBER:%d\nREVERSED NUMBER:%d\n",x,reverse);

	getch();
	clrscr();
}

	