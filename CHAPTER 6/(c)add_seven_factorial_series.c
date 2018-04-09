#include<conio.h>
#include<stdio.h>
void main()

{
	int i,n,factorial;
	float sum,a;
	sum=1;
	for(n=2;n<=7;n++)
	{
		i=1;
		do
		{
			factorial=n*(n-i);
		    a=n/factorial;
		    sum=sum+a;
			i++; printf("%d\n",sum);
	    }
		while(i<n);

	}
	printf("THE SUM OF 1/1!+2/2!+3/3!....7/7! SERIES IS =%d/n",sum);
	getch();
	clrscr();
}
