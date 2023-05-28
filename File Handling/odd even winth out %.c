#include<stdio.h>
#include<conio.h>
#include<windows.h>
void main()
{
	system("color 0B");
	int s;
	printf("Enter a number:");
	scanf("%d",&s);
	s&1?printf("Odd number"):printf("Even number");
	getch();
}
