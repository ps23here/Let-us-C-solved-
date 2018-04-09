#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c,d,e,f,g,amount;
	printf("ENTER THE AMOUNT \n");
	scanf("%d",&amount);
	
	a=amount/100;
	amount=amount%100;
	
	b=amount/50;
	amount=amount%50;
	
	c=amount/20;
	amount=amount%20;
	
	d=amount/10;
	amount=amount%10;
	
	e=amount/5;
	amount=amount%5;
	
	f=amount/2;
	amount=amount%2;
	
	g=amount/1;
	amount=amount%1;
	
	printf("THE SMALLEST NUMBER OF NOTES TO BE COLLECTED FOR THE ENTERED AMOUNT IS:\n RS. 100:%d notes \n RS. 50:%d notes \n RS. 20:%d notes \n RS. 10:%d notes \n RS.5:%d notes \n RS.2:%d notes \n RS.1:%d notes \n ",a,b,c,d,e,f,g);
	getch();
	clrscr();
}