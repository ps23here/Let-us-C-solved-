#include<conio.h>
#include<stdio.h>
void main()
{
	int l,b,area,perimeter;
	float area2,r,circumference;
	printf("ENTER LENTH AND BREADTH OF RECTANGLE\n");
	scanf("%d%d",&l,&b);
	area=l*b;
	perimeter=2*(l+b);
	printf("NOW ENTER THE RADIUS OF CIRCLE\n");
	scanf("%f",&r);
	area2=3.14*r*r;
	circumference=2*3.14*r;
printf("RECTANGLE \n area :%d \n perimeter: %d \n CIRCLE \n area:%f \n circumference : %f \n",area,perimeter,area2,circumference);
getch();
clrscr();
}

