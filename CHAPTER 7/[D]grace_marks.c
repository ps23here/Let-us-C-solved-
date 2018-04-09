#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int failed,c;
	printf("WHICH CLASS DID YOU OBTAIN?\n1ST(PRESS 1)\n2ND(PRESS 1)\n3RD(PRESS 1)\n");
    scanf("%d",&c);
	printf("HOW MANY SUBJECTS DID YOU FAILED IN?\n");
    scanf("%d",&failed);
	
	switch(c)
	{
		case 1:
		switch(failed)
		{
			case 0:
			 printf("YOU GET 5 GRACE MARKS PER SUBJECT");
			   break;			  
            case 1:
			   printf("YOU GET 5 GRACE MARKS PER SUBJECT");
			   break;
            case 2:
			   printf("YOU GET 5 GRACE MARKS PER SUBJECT");
			   break;
            case 3:	
               printf("YOU GET 5 GRACE MARKS PER SUBJECT");
			   break;
            default:
               printf("YOU GET 0 GRACE MARKS PER SUBJECT");	
		}	
        break;		
		case 2:
		switch(failed)
		{
			case 0:
			   printf("YOU GET 4 GRACE MARKS PER SUBJECT");
			   break;
            case 1:
			   printf("YOU GET 4 GRACE MARKS PER SUBJECT");
			   break;
            case 2:
			   printf("YOU GET 4 GRACE MARKS PER SUBJECT");
			   break;
            default:
               printf("YOU GET 0 GRACE MARKS PER SUBJECT");
		}
        break;		
		
		case 3:
		switch(failed)
		{
			case 0:
			   printf("YOU GET 5 GRACE MARKS PER SUBJECT");
			   break;
            case 1:
			   printf("YOU GET 5 GRACE MARKS PER SUBJECT");
			   break;
            default:
               printf("YOU GET 0 GRACE MARKS PER SUBJECT");
		}	
        break;		
		
		default:
		printf("you are an idiot");
	}
	getch();
	clrscr();
}
	