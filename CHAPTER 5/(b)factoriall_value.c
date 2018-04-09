#include<stdio.h>
#include<conio.h>
void main()
{
	int i,number,factorial,fact,n;
	printf("ENTER THE POSITIVE INTEGER TO KNOW ITS FACTORIAL VALUE\n");
	scanf("%d",&number);
	factorial=number;
	
	
	for(i=number,n=1;n<i;n++)
	{
		fact=i-n;
		factorial=factorial*fact;
	}
	printf("THE FACTORIAL VALUE FOR %d IS:\n%d\n",number,factorial);
	
	getch();
	clrscr();
}