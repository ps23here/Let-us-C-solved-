#include<conio.h>
#include<stdio.h>
void main()
{
	int a,b,c,d,e,total;
	float percentage,aggregate;
    printf("ENTER MARKS IN ALL 5 SUBJECTS\n");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	total=a+b+c+d+e;
    percentage=(total/500)*100;
	aggregate=total/5;
	printf("THE PERCENTAGE IS %f AND AGGREGATE IS %f",percentage,aggregate);
	getch();
	clrscr();
}
