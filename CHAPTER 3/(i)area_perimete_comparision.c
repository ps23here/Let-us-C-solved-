#include<conio.h>
#include<stdio.h>
void main()
{
	int l,b,perimeter,area;
	printf("ENTER THE LENTH AND BREADTH OF THE RECTANGLE\n");
	scanf("%d%d",&l,&b);
	
	area=l*b;
	perimeter=2*(l+b);
	
	if(area>perimeter) 
		printf("THE AREA (%d) IS LARGER THAN ITS PERIMETER (%d)",area,perimeter);
	else
		printf("THE AREA (%d) IS SMALLER THAN ITS PERIMETER (%d)",area,perimeter);
	getch();
	clrscr();
}
