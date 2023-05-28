#include<conio.h>
#include<stdio.h>
#define PI 3.1416
void main()
{
	float a,r;
	printf("Enter radius:");
	scanf("%f",&r);
	a=PI*r*r;
	printf("Area=%f",a);
	getch();
}

