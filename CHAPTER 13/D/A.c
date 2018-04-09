#include<stdio.h>
void main()
{
int numbers[25];
int a,i,x,sum=0,final_sum;
printf("ENTER 25 NUMBERS OF YOUR CHOICE\n");
for(i=0;i<25;i++)
{
scanf("%d",&numbers[i]);
}
printf("ENTER THE NUMBER TO BE SEARCHED\n");
scanf("%d",&x);
for(a=0;a<25;a++)
{
if(x==numbers[a])
{
printf("it is present at %dth location \n",a);
sum=sum+numbers[a];
}
}
final_sum=sum/x;
printf("TOTAL NUMBER OF TIMES IT APPEARED IN THE PROGRAM IS:%d\n",final_sum);
return(0);
}
