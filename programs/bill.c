#include<conio.h>
#include<stdio.h>
void main()
{
	int u;
	float b;
	printf("Enter units consumed=");
	scanf("%d",&u);
	if(u>500)
	b=u*9;
	else if(u>300)
	b=u*7;
	else
	b=u*4;
	b=b+250;
	if(b>3000)
	b=b+(b*10.0/100.0);
	printf("Total Bill:%f Rs",b);
	getch();
}

