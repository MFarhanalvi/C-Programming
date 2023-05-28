#include<conio.h>
#include<stdio.h>
void factorial(int);
void main()
{
	int n;
	printf("Enter a  number:");
	scanf("%d",&n);
	factorial(n);
	getch();
}
void factorial(int a)
{
	int i,fact;
	fact=1;
	for(i=1;i<=a;i++)
	fact*=i;
	printf("Factorial of %d is:%d",a,fact);
}
