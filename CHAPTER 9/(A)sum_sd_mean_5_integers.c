#include<conio.h>
#include<stdio.h>
#include<math.h>

int sum_of_int(int *,int *,int *,int *,int *);
float avg(int *,int *,int *,int *,int *);
float md(int *,int *,int *,int *,int *);
void main()
{
	int a,b,c,d,e,sum;
	float mean,avrg;
	printf("ENTER ANY 5 INTEGERS TO FIND ITS SUM AND MEAN DEVIATION/n");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	sum=sum_of_int(&a,&b,&c,&d,&e);
	avrg=avg(&a,&b,&c,&d,&e);
	mean=md(&a,&b,&c,&d,&e);
	printf("THE SUM OF INTEGERS IS:/n%d/nTHE AVERAGE IS:/n%d/nTHE MEAN DEVIATION IS:/n%d",sum,avrg,mean);
	getch();
	clrscr();
	
}
int sum_of_int(int *v,int *w,int *x,int *y,int *z)
{
	int s;
	s=*v+*w+*x+*y+*z;
	return(s);
}
float avg(int *k,int *f,int *g,int *h,int *i)
{
	float av;
	int summ;
	suum=sum_of_int(&k,&f,&g,&h,&i);
	av=summ/5;
	
	return(av);
}
float md(int *p,int *q,int *r,int *s,int *t)
{
	float sm,average,i,j,k,l,m,add,var;
	average=float avg();
	i=pow((*p-average),2);
	j=pow((*q-average),2);
	k=pow((*r-average),2);
	l=pow((*s-average),2);
	m=pow((*t-average),2);
	add=i+j+k+l+m;
	var=add/5;
	sm=sqrt(var);
	return(sm);
}

	
	