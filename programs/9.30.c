#include<conio.h>
#include<stdio.h>
void line1();
void line2();
void main()
{
	int i;
	line1();
	line2();
	printf("        ");
	for (i=0;i<=5;i++)
	printf("\n*");
	getch();
}
 void line1()
{
	int i;
	for (i=0;i<=5;i++)
	printf("@");
}
 void line2(int n)
{
	int i;
	for(i=0;i<=5;i++)
	printf("#");
}
