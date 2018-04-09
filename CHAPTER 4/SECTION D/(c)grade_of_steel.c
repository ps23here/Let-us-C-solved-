#include<conio.h>
#include<stdio.h>
void main()
{
	int hardness,tensile_strenth;
	float carbon_content;
	printf("ENTER THE HARDNESS,CARBON CONTENT AND TENSILE STRENTH OF THE STEEL TO DETERMINE ITS GRADE\n");
	scanf("%d%f%d",&hardness,&carbon_content,&tensile_strenth);
	
	if(hardness>50&&carbon_content<0.7&&tensile_strenth>5600)
	{
		printf("IT'S A 10th GRADE STEEL");
	}
	else if(hardness>50&&carbon_content<0.7)
	{
		printf("IT'S A 9th GRADE STEEL"); 
	}
	else if(carbon_content<0.7&&tensile_strenth>5600)
	{
		printf("IT'S A 8th GRADE STEEL"); 
	}
	else if(hardness>50&&tensile_strenth>5600)
	{
		printf("IT'S A 7th GRADE STEEL");
	}	
	else if(hardness>50||carbon_content<0.7||tensile_strenth>5600)
	{
		printf("IT'S A 6th GRADE STEEL"); 
	}
	else
	{
		printf("IT'S A 5th GRADE STEEL"); 
	}
	
	getch();
	clrscr();
}