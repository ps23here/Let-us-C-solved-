#include<stdio.h>
#include<conio.h>
float power(float a,float b);
void main()
{
	float x,y,raised;
	printf("ENTER ANY NUMBER AND TO WHICH POWER IT SHOULD BE RAISED\n");
	scanf("%f%f",&x,&y);
	raised=power(x,y);
	printf("THE VALUE OF %f RAISED TO %f IS %f\n",x,y,raised);
	getch();
	clrscr();
}
float power(float a,float b)
{
	int p,i;
	p=1;
	for(i=1;i<=b;i++)
	{	
		
		p=p*a;
	}
	return(p);
}
 