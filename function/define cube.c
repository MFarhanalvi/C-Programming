#include<conio.h>
#include<stdio.h>
#define cube(a) a*a*a
void main()
{
	int a;
	printf("Enter 1st number:");
	scanf("%d",&a);
	printf("Cube=%d",cube(a));
	getch();
}
