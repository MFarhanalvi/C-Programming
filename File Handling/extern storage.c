#include<stdio.h>
#include<conio.h>
#include<windows.h>
void f1();
void f2();int x;
int x;
void main()
{
	extern int x;
	system("color 0e");
	printf("x=%d\n",x);
	f1();
	f2();
	printf("x=%d\n",x);
	getch();
}
void f1()
{
	x++;
	printf("x=%d\n",x);
}
void f2()
{
	int x=2;
	x++;
	printf("x=%d\n",x);
}
