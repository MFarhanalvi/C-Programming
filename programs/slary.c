#include<conio.h>
#include<stdio.h>
void main()
{
	int x,y,a;
	printf("Enter your salary:");
	scanf("%d",&x);
	printf("Enter your grade:");
	scanf("%d",&y);
	if(y>15)
	a=x*50/100;
	else
	a=x*25/100;
	printf("Your total Salary is=%d Rs",a+x);
	getch();
}
