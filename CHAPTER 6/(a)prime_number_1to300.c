
#include<conio.h>
#include<stdio.h>
void main()
{
	int i,number;
	printf("THE PRIME NUMBERS FROM 1TO 300 ARE:\n");
	
	
	for(i=1,number=1;number>=1&&number<=300;number++)
	{
		while(i<number)
		{	
			if(number%number-i==0&&number-i!=1)
				break;
		    else
				printf("%d IS A PRIME NUMBER\n",number);
			i++;
		}
		printf("%d IS NOT A PRIME NUMBER\n",number);	
	}
	getch();
	clrscr();
}
	