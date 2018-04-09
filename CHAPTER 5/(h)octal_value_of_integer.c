#include<stdio.h>
#include<conio.h>
void main()
{
	int number,a,x;
	float rem;

	printf("ENTER ANY INTEGER\n");
	scanf("%d",&number);
	printf("THE OCTAL EQUIVALENT IS:\n");
	
	a=number;
	
	
	while(a!=0)
	{
	rem=a%8;
	x=rem;
   	
	printf("%d",x);
	a/10;
	}
	
	getch();
	clrscr();
}