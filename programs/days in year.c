#include<conio.h>
#include<stdio.h>
void main()
{
	int d,m,t;
	int a,days_per_month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	printf("Enter the month number:");
	scanf("%d",&d);
	printf("Enter the day number:");
	scanf("%d",&m);
	t=d;
	for(a=0;a<m-1;a++)
	t+= days_per_month[a];
	printf("The number of days in this year till date:%d",t);
	getch();
}
