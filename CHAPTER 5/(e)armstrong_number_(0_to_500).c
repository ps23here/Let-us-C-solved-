#include<stdio.h>
#include<conio.h>
void main()
{
	int number,armstrong,n1,n2,n3,x,y;

	printf("THE ARMSTRONG NUMBERS FROM 1 TO 500\n");
	
	number=1;
	while(number<=500&&number>0)
	{
		if(number>=1&&number<=9)
		{
			armstrong=number*number*number;
		}
		else if(number>=10&&number<=99)
		{
			
			armstrong=;
		}
		else
		{
			y=number;
			n3=y%10;
			y=y/10;
			n2=y%10;
			y=y/10;
			n3=y;
			
			armstrong=n1*n1*n1+n2*n2*n2+n3*n3*n3;
		}
		if(armstrong==x)
			printf("%d\n",x);
			
	number++;
	}
	getch();
	clrscr();
}
