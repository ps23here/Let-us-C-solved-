#include<conio.h>
#include<stdio.h>
void main()
{
	char month;
	int date;
	
	printf("ENTER THE MONTH OF YOUR BIRTH \nJ:JANUARY\nF=FEBRUARY\nM=MARCH\nA=APRIL\nm=MAY\nU=JUNE\nj=JULY\na=AUGUST\nS=SEPTEMBER\n0=OCTOBER\nN=NOVEMBER\nD=DECEMBER\n");
	scanf("%c",&month);
	
	printf("\nENTER THE DATE OF YOUR BIRT\H\n");
	scanf("%d",&date); 
	
	if(month=='D'&&date>=22&&month=='J'&&date<=19)               
		printf("YOUR ZODIAC SIGN IS:CAPRICORN");                     
	
	else if(month=='J'&&date>=20||month=='F'&&date<=17)     
		printf("YOUR ZODIAC SIGN IS:AQUARIUS");
	
	else if(month=='F'&&date>=18||month=='M'&&date<=19)    
		printf("YOUR ZODIAC SIGN IS:PISCES");
	
	else if(month=='M'&&date>=20||month=='A'&&date<=19)    
		printf("YOUR ZODIAC SIGN IS:ARIES");
	
	else if(month=='A'&&date>=20||month=='m'&&date<=20)    
		printf("YOUR ZODIAC SIGN IS:TAURUS");
	
	else if(month=='m'&&date>=21||month=='U'&&date<=20)    
		printf("YOUR ZODIAC SIGN IS:GEMINI"); 
	
	else if(month=='U'&&date>=21||month=='j'&&date<=22)   
		printf("YOUR ZODIAC SIGN IS:CANCER");
	
	else if(month=='j'&&date>=23||month=='a'&&date<=22)    
		printf("YOUR ZODIAC SIGN IS:LEO");
	
	else if(month=='a'&&date>=23||month=='S'&&date<=22)    
		printf("YOUR ZODIAC SIGN IS:VIRGO");
	
	else if(month=='S'&&date>=23||month=='O'&&date<=22)    
		printf("YOUR ZODIAC SIGN IS:LIBRA");
	
	else if(month=='O'&&date>=23||month=='N'&&date<=21)    
		printf("YOUR ZODIAC SIGN IS:SCORPIO");
	
	else if(month=='N'&&date>=22||month=='D'&&date<=21)    
		printf("YOUR ZODIAC SIGN IS:SAGITTARIUS");
	else
		printf("TU CHUTIA HAI BEHAN K LODE");
	
	getch();
	clrscr();
}