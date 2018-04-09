#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c,perimeter,area,p;
	printf("ENTER THE THREE SIDES OF THE TRIANGLE\n");
	scanf("%d%d%d",&a,&b,&c);
	perimeter=a+b+c;
    p=perimeter/2;
	area=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("THE AREA OF THE TRIANGLE IS :%d",area);
	getch();
	clrscr();
}