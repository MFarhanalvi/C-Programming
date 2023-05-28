#include<conio.h>
#include<stdio.h>
void main()
{
	int a,s,d=0;
	printf("Enter a number:");
	scanf("%d",&a);
	for(s=1;s<=a;s++)
	d=d+(s*s);
	printf("sum of squares:%d",d);
	getch();
}
