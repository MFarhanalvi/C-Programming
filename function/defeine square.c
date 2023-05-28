#include<conio.h>
#include<stdio.h>
#define square(a) a*a
void main()
{
	float a;
	printf("Enter 1st number:");
	scanf("%f",&a);
	printf("square=%f",square(a));
	getch();
}
