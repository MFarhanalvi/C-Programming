#include<conio.h>
#include<stdio.h>
void main()
{
	int o,e,d;
	printf("Enter an even number=");
	scanf("%d",&e);
	printf("Enter an odd number=");
	scanf("%d",&o);
	d=1000-((e*5)+(o*3));
	printf("differance =%d",d);
	getch();
	
	
	
}
