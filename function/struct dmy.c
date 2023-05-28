#include<conio.h>
#include<stdio.h>
struct date
{
	int d,m,y;
};
void main()
{
	struct date t={13,12,2019};
	printf("Date:\n");
	printf("%d-%d-%d",t.d,t.m,t.y);
	getch();
}
