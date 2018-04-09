#include<stdio.h>
int add(int);
int add_rec(int);
int main()
{
int number,sum1,sum2;
printf("enter any five digit integer");
scanf("%d",&number);
sum1=add(number);
sum2=add_rec(number);
printf("Sum of digits via recursion is and non recusrson is %d",sum1);
return(0);
}
int add(int x)
{
    int sum=0;

    x=x%10;
    sum=sum+x;
    x=x/10;
    x=x%10;
    sum=sum+x;
    x=x/10;
    x=x%10;
    sum=sum+x;
    x=x/10;
    x=x%10;
    sum=sum+x;
    x=x/10;
    x=x%10;
    sum=sum+x;
    x=x/10;

    return(sum);
}

int add_rec(int y)
{

    int sum=0;

    if (y=0)
    {
        return(0);
    }
    else
    {
    y=y%10;
    sum=sum+y;
    y=y/10;
    add_rec(y);
    }
    return(sum);
}

