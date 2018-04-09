#include<stdio.h>
#include<conio.h>
void main()
{
	int x1,x2,x3,y1,y2,y3,slope1,slope2;
	
	printf("ENTER THE CO-ORDINATES OF FIRST POINT\n");
	scanf("%d%d",&x1,&y1);
	
	printf("ENTER THE CO-ORDINATES OF SECOND POINT\n");
	scanf("%d%d",&x2,&y2);
	
	printf("ENTER THE CO-ORDINATES OF THIRD POINT\n");
	scanf("%d%d",&x3,&y3);
	
	slope1=(y2-y1)/(x2-x1);
	slope2=(y3-y2)/(x3-x2);
	
	if(slope1==slope2)
		printf("THE POINTS ARE CO-LINEAR");
	else
		printf("THE POINTS ARE NOT CO-LINEAR");
	getch();
	clrscr();
}
	
	
	
	
	
	
	
	
	
	
	
	