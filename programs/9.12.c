#include<conio.h>
#include<stdio.h>
float area(float,float);
void main()
{
	float h,b;
	float s;
	printf("Enter base:");
	scanf("%f",&b);
	printf("Enter height:");
	scanf("%f",&h);
	s=area(b,h);
	printf("Area of Triangle=%f",s);
	getch();
}
float area(float a,float s)
{
	float d;
	d=0.5*a*s;
	return d;
}
