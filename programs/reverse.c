#include<conio.h>
#include<stdio.h>
void main()
{
	int n,a,b,c,d,s;
	printf("Enter 6-digit number:");
	scanf("%d",&n);
	a=n/100000;
	n=n%100000;
	b=n/10000;
	n=n%10000;
	c=n/1000;
	n=n%1000;
	d=n/100;
	n=n%100;
	s=n/10;
	n=n%10;
	printf("Number in reverse order is:%d%d%d%d%d%d",n,s,d,c,b,a);
	getch();
	
}
