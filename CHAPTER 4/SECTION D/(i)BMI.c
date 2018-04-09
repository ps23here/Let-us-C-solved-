#include<conio.h>
#include<stdio.h>
void main()
{
	float weight,height,h2,bmi;
	
	printf("ENTER YOUR WEIGHT IN KILOGRAMS\n");
	scanf("%f",&weight);
	printf("ENTER YOUR HEIGHT IN METERS\n");
	scanf("%f",&height);
	
	h2=height*height;
	
	bmi=weight/h2;

	if(bmi<15) 
		printf("BMI CATEGORY:STARVATION");
	else if(bmi>=15.1 && bmi<=17.5)
		printf("BMI CATEGORY:ANOREXIC");
	else if(bmi>=17.6 && bmi<=18.5)  
		printf("BMI CATEGORY:UNDERWEIGHT");
	else if(bmi>=18.6 && bmi<=24.9)  
		printf("BMI CATEGORY:IDEAL");
	else if(bmi>=25 && bmi<=25.9)  
		printf("BMI CATEGORY:OVERWEIGHT");
	else if(bmi>=30 && bmi<=30.9)  
		printf("BMI CATEGORY:OBESE");
	else
		printf("BMI CATEGORY:MORBIDLY OBESE");
	
	getch();
	clrscr();
}
	
	
	