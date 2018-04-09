
#include<stdio.h>
#include<math.h>
#include<conio.h>

void main()
{
	float a,b,c,x,y,z;
	printf("ENTER THE THREE SIDES OF THE TRIANGLE\n");
	scanf("%f%f%f",&a,&b,&c);
	x=a+b;
	y=a+c;
	z=b+c;

	if(x>c&&y>b&&z>a)
	{
		printf("VALID");
	}
	else
	{
		printf("INVALID");
	}
	getch();
	clrscr();

}
