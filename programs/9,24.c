#include<conio.h>
#include<stdio.h>
typedef struct
{
	int hours;
	int minutes;
	int seconds;
}time1;
void add(time1 t1,time1 t2);
void main()
{
	int i;
	time1 t1[2];
	for(i=0;i<2;i++)
	{
	printf("Enter the time %d:\n",i+1);
	printf("Hours:");
	scanf("%d",&t1[i].hours);
	printf("Minutes:");
	scanf("%d",&t1[i].minutes);
	printf("Seconds:");
	scanf("%d",&t1[i].seconds);
}
add(t1[0],t1[1]);
getch();
}
 void add(time1 t1,time1 t2)
{
	int s,m,h,x;
	s=t1.seconds+t2.seconds;
	x=s/60;
	s%=60;
	m=t1.minutes+t2.minutes+x;
	h=t1.hours+t2.hours+m/60;
	m%=60;
	printf("\t\tTotal Time in hh mm ss format:\n\n");
	printf("\t\tHours:%d\n",h);
	printf("\t\tMinutes:%d\n",m);
	printf("\t\tSeconds:%d",s);
}

