#include<conio.h>
#include<stdio.h>
#include<math.h>

void main()
{
	int x=0,y=0,r=10,a,b,d;
	printf("ENTER THE CO-ORDINATES OF THE POINT\n");
	scanf("%d%d",&a,&b);

	d=sqrt(pow(a-x,2)+pow(b-y,2));
	if(d<r)
		printf("THE POINT LIES INSIDE THE CIRCLE");
	else if(d>r)
		printf("THE POINT LIES OUTSIDE THE CIRCLE");
	else if(d==r)
	    printf("THE POINT LIES ON THE CIRCLE");
	getch();
	clrscr();
}