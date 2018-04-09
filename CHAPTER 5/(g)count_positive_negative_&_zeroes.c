#include<stdio.h>
#include<conio.h>
void main()
{
	int decesion,a,positive,negative,zeroes,total;
	char x;
	decesion=1;
	total=0;
	positive=0;
	negative=0;
	zeroes=0;

	while(decesion>0)
	{
		printf("ENTER ANY NUMBER\n");
		scanf("%d",&a);
		printf("IF YOU WANT TO CONTUNUE PRESS 1 ELSE PRESS -1\n");
		scanf("%d",&decesion);
		x=a;
		if(x==0)
			zeroes=zeroes+1;
		else if(x>0)
			positive=positive+1;
	    else if(x<0)
			negative=negative+1;
		else
			printf("INVALID ENTRY");


	    decesion++;
		total++;

	}
	printf("STATISTICS:\nTOTAL:%d\nPOSITIVE:%d\nNEGATIVE:%d\nZEROES:%d\n",total,positive,negative,zeroes);
	getch();
	clrscr();
}
	