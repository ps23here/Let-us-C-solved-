#include<stdio.h>
#include<conio.h>
int factorial(int i);
void main()
{
	int number,facto;
	printf("ENTER THE POSITIVE INTEGER TO KNOW ITS FACTORIAL VALUE\n");
	scanf("%d",&number);
	
	facto=factorial(number);
	printf("THE FACTORIAL VALUE FOR %d IS:\n%d\n",number,facto);
	getch();
	clrscr();
}
int factorial(int i)
{
	int factoria,fact,n;
	factoria=i;
	for(i,n=1;n<i;n++)
	{
		fact=i-n;
		factoria=factoria*fact;
	}
	return(factoria);
	
}