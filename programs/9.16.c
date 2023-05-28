#include<conio.h>
#include<stdio.h>
int g;
void fun();
void main()
{
	printf("Enter a number:");
	scanf("%d",&g);
	printf("value of g before function call:%d\n",g);
	fun();
	printf("value of g after function call:%d",g);
	getch();
}
void fun()
{
    g=g*2;
}
