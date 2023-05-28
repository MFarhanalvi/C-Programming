#include<stdio.h>
#include<conio.h>
void f1();
void main()
{
	system("color 0e");
	f1();
	f1();
	getch();
}
void f1()
{
	static int i;
	i++;
	printf("i=%d\n",i);
}
