#include<stdio.h>
#include<conio.h>
void main()
{
	int a,max,min,range,decesion,y,x;
	printf("ENTER ANY SET OF NUMBERS TO KNOW THE RANGE OF THESE SET OF  NUMBERS:\n");
	
	max=0;
	decesion=1;
	y=32767;
	while(decesion>0)
	{
	printf("Enter your number\n");
	scanf("%d%",&a);
	printf("TO CONTINUE:PRESS 1 TO EXIT:PRESS -1\n");
	scanf("%d",&decesion);
	x=a;
	
	
	if(x>max)
	{
		max=x;
	}
	else if(x<max)	
	{
		min=x;
		if(min<y)
		{
			min=x;
			y=min;
		}
	
	}
	
	decesion++;
	}
	
	
	range=max-min;
	printf("RESULTS:\nMAXIMUM:%d\nMINIMUM:%d\nRANGE:%d\n",max,min,range);
	
	getch();
	clrscr();
}

	