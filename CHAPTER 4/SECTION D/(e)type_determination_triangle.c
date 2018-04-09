#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,x,y,z;
	printf("ENTER THE THREE SIDES OF THE TRIANGLE\n");
	scanf("%f%f%f",&a,&b,&c);
	x=pow(c,2);
	y=pow(b,2);
	z=pow(a,2);
	if(a==b==c)
		printf("TRIANGLE TYPE:EQUOTORIAL");
	
	else if(a==b||b==c||c==a)
		printf("TRIANGLE TYPE:ACUTE");
	
	else if(x==y+z)
		printf("TRIANGLE TYPE:RIGHT ANGLED");
	
	else if(a!=b!=c)
		printf("TRIANGLE TYPE:SCALENE");
	getch();
	clrscr();
}