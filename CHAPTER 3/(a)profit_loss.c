#include<conio.h>
#include<stdio.h>
void main()
{
	float cp,sp,profit,loss;
	printf("ENTER THE COST PRICE AND SELLING PRICE OF THE MATERIAL\n");
	scanf("%f%f",&cp,&sp);
	if (cp>sp)
	{
		loss=cp-sp;
		printf("THERE IS A LOSS OF:RS.%f",loss);
	}
	else
	{
		profit=sp-cp;
		printf("THERE IS A PROFIT OF:RS.%f ",profit);
	}
	getch();
	clrscr();
}