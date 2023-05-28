#include<conio.h>
#include<stdio.h>
void main()
{
	int a,b;
	int *p,*q;
	p=&a;
	q=&b;
	printf("%u",*&p);
	printf("%u",p+1);
	getch();
	
	
	
}
