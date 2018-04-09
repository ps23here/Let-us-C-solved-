#include<conio.h>
#include<stdio.h>
void main()
{
int c,d,x=0,y=0;
print("ENTER ANY TWO NUMBERS: \n");
scanf("%d%d",&c,&d);
x=(x+1)*c;
y=(y+1)*d;
d=x;
c=y;
printf("ACTUAL NUMBERS:\n C:%d\nD:%d\n INTERCHANGED NUMBERS:\n C:%d\nD:%d\n ",x,y,c,d);
getch();
clrscr();
}