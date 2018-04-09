#include<conio.h>
#include<stdio.h>
void main()
{
	float weight;
	
	printf("ENTER THE WEIGHT OF THE BOXER(IN POUNDS) TO KNOW THEIR WEIGHT CLASS\n");
	scanf("%f",&weight);
	
	if(weight<115)
		printf("CLASS:'FLY WEIGHT'");
	else if(weight>=115 && weight<=121)
		printf("CLASS:'BANTAM WEIGHT'");
	else if(weight>=122 && weight<=153)     
		printf("CLASS:'FEATHER WEIGHT'");
	else if(weight>=154 && weight<=189)
		printf("CLASS:'MIDDLE WEIGHT'"); 
	else
		printf("CLASS:'HEAVY WEIGHT'"); 
	
	getch();
	clrscr();
}
	
	