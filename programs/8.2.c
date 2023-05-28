#include<conio.h>
#include<stdio.h>
typedef struct
{
	int d;
	int m;
	int y;
}birth;
void main ()
{
	birth b;
	printf("Enter day of birth:");
	scanf("%d",&b.d);
	printf("Enter month of birth:");
	scanf("%d",&b.m);
	printf("Enter year of birth:");
	scanf("%d",&b.y);
	printf("\n\t\tYour Date of Birth is %d/%d/%d",b.d,b.m,b.y);
	getch();
}
