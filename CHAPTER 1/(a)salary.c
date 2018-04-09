#include<stdio.h>
void main()
{
int salary;
float d_allowance,rent,total;
printf("ENTER YOUR SALARY \n");
scanf("%d",&salary);
d_allowance=0.2*salary;
rent=0.4*salary;
total=salary-d_allowance-rent;
printf("GROSS SALARY IS %f",total);
return(0);
}
