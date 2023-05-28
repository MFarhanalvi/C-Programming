#include<conio.h>
#include<stdio.h>
void main()
{
    float i,f,a,t;
	printf("Enter the vlaue of initial velocity=");
	scanf("%f",&i);
	printf("Enter the value of acceleration=");
	scanf("%f",&a);
	printf("Enter value of time=");
	scanf("%f",&t);
	f=i+a*t;
	printf("Final velocity=%fm/s",f);
	getch();
}
