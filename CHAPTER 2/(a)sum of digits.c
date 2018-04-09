#include<stdio.h>
#include<conio.h>
void main()
{
	int no,sum=0,a;
	printf("ENTER THE FIVE DIGIT NUMBER");
	scanf("%d",&no);
	
	a=num%10;
	sum=sum+a;
	no=no/10;
	
	a=num%10;
	sum=sum+a;
	no=no/10;
	
	a=num%10;
	sum=sum+a;
	no=no/10;
	
	a=num%10;
	sum=sum+a;
	no=no/10;
	
	a=num%10;
	sum=sum+a;
	no=no/10;
	
	printf("THE SUM OF THE DIGITS IS: %d",sum);
	getch();
	clrscr();
}