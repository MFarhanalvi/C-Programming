#include<conio.h>
#include<stdio.h>
void prsu(int);
void main()
{
	int x;
	printf("Enter a number:");
	scanf("%d",&x);
	prsu(x);
	getch();
}
void prsu(int s)
{
	int d,f;
	d=s-1;
	f=s+1;
	printf("The number before %d is :%d\n",s,d);
	printf("The number after %d is:%d",s,f);
}
