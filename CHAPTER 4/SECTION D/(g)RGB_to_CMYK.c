#include<conio.h>
#include<stdio.h>
#include<math.h>

void main()
{
	int red,green,blue,white,cyan,magneta,yellow;
	float black;
	
	printf("ENTER THE RED GREEN BLUE VALUES OF THE COLOR TO CONVERT IT INTO CMYK VALUES\n");
	scanf("%d%d%d",&red,&blue,&green);
		
	white=max(red/255,green/255,blue/255);
	cyan=((white-red)/255)/white;
	magneta=((white-green)/255)/white; 
	yellow=((white-blue)/255)/white;
	black=1-white;
	
	if (red==0&&blue==0&&green==0)
	{
		cyan=0;
		magneta=0;
		yellow=0;
		black=1;
		printf("RGB VALUES:\nRED:%d\nGREEN:%d\nBLUE:%d\nCYMK VALUES:\nCYAN:%d\nMAGNETA:%d\nYELLOW:%d\nBLACK:%d\n",red,green,blue,cyan,magneta,yellow,black);
	}
	else
		printf("RGB VALUES:\nRED:%d\nGREEN:%d\nBLUE:%d\nCYMK VALUES:\nCYAN:%d\nMAGNETA:%d\nYELLOW:%d\nBLACK:%d\n",red,green,blue,cyan,magneta,yellow,black);
	getch();
	clrscr();
}
	
	