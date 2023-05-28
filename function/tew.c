#include<conio.h>
#include<stdio.h>
void main()
{
	int a[10],b;
	printf("Enter ten numbers=\n");
	for(b=1;b<=10;b++)
	scanf("%d",&a[b]);
	for(b=1;b<=10;b++)
	a[b]%2==0?printf("Even number\n"):printf("Odd number\n");
	getch();
}
