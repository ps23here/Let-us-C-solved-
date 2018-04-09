#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{
	
	float y,x,z,n;
	printf("ENTER X TO COMPUTE ITS NATURAL LOG\n");
	scanf("%d",&x);
	
	
	for(y=(x-1)/x,z=y,n=2.0;n<8.0;n++)
	{
		z=z+((1/2)*pow(y,n));
		printf("THE LOG VALUE = %f\n",z);
	}
	printf("THE LOG VALUE = %f\n",z);
	getch();
	clrscr();
}