#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{
	float l1,l2,g1,g2,distance;
	printf("ENTER THE LATITUDE AND LONGITUDE OF STARTING POINT\n ");
	scanf("%f%f",&l1,&g1);
	printf("ENTER THE LATITUDE AND LONGITUDE OF DESTINATION\n ");
	scanf("%f%f",&l2,&g2);
	distance=3963*acos(((sin(l1)*sin(l2))+(cos(l1)*cos(l2)))*(cos(g2-g1)));
	printf("THE DIATSNCE BETWEEN THE STARTING POINT AND THE DESTINATION IS :%f",distance);
	getch();
	clrscr();
}