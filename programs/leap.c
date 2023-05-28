#include<conio.h>
#include<stdio.h>
void main()
{
	int x;
	printf("Enter year:");
	scanf("%d",&x);
	x%4==0?printf("Is a leap year:"):printf("Is not a leap year:");
	getch();
}
