#include<stdio.h>
#include<conio.h>
void main()
{
	float a,avalue;
	printf("ENTERT ANY NUMBER TO KNOW ITS ABSOLUTE VALUE\n");
	scanf("%f",&a);
	if(a<0)
	{	
      avalue=-1*a;
	  printf("THE ABSOLUTE VALUE IS : %f",avalue);
	}
	else
	{
		avalue=a;
		printf("THE ABSOLUTE VALUE IS : %f ",avalue);
	}
	getch();
	clrscr();
}
	
		
	