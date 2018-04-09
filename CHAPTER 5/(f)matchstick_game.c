#include<stdio.h>
#include<conio.h>
void main()
{
	int turn1,turn2,rem,total;
	printf("THE MATCHSTICK GAME\nChoose either 1,2,3 or 4 sticks\nThe last one to pick up a stick will lose the game.\nTOTAL STICKS:21\nLETS BEGAIN:\n");
	
	total=21;
    
	while(total>1)
	{
		printf("Your turn\n");
	    scanf("%d",&turn1);
		if(turn1>0&&turn1<5)
		{
		turn2=5-turn1;
		printf("My turn i'll pickup %d stick(s)\n",turn2);
		rem=turn1+turn2;
		total=total-rem;
		printf("TOTAL REMAINING:%d\n",total);
		}
		else
	    printf("INVALID MOVE\n");
	}
		printf("YOU PICKED THE LAST STICK\nYOU LOSE\nBETTER LUCK NEXT TIME");
		getch();
		clrscr();
}
		
		
