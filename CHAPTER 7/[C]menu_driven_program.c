#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int decesion,number,check,value,i,fact,factorial,n;
	
	printf("ENTER ANY NUMBER\n");
	scanf("%d",&number);
	printf("WHAT DO YOU WANT WITH THE NUMBER:\n1.FACTORIAL OF A NUMBER\n2.PRIME OR NOT\n3.ODD OR EVEN\n4.EXIT\nCHOOSE THE RESCPECTED NUMBER FOR THE EXECUTION OF THE PROGRAM\n");
	scanf("%d",&decesion);
	
	switch(decesion)
	{
		case 1:
		printf("YOU CHOOSED OPTION 1\n");
		factorial=number;
	
	
	    for(i=number,n=1;n<i;n++)
	    {
	     	fact=i-n;
	    	factorial=factorial*fact;
	    }
	    printf("THE FACTORIAL VALUE FOR %d IS:\n%d\n",number,factorial);
		break;
		
		
		case 2:
		printf("YOU CHOOSED OPTION 2\n");
		break;		
		
		case 3:
		printf("YOU CHOOSED OPTION 3\n");
		value=number%2;
	    if(value==0)
		    printf("THE NUMBER %d IS EVEN",number);
	    else
		    printf("THE NUMBER %d IS ODD",number);
		break;

		case 4:
		printf("YOU CHOOSED OPTION 4\n");
		exit(1);
		break;
	}
	
	getch();
	clrscr();
}
	