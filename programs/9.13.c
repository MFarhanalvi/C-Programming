#include<conio.h>
#include<stdio.h>
int sq(int);
int cube(int);
void main()
{
	int a,s,r;
	printf("\t\tWhat is the Square of 1st and Cube of 2nd?\n\n");
	printf("Enter 1st Integer:");
	scanf("%d",&a);
	printf("Enter 2nd Integer:");
	scanf("%d",&s);
	r=sq(a)+cube(s);
	printf("Result=%d",r);
	getch();
}
int sq(int n)
{
	return n*n;
}
int cube(int j)
{
	return j*j*j;
}
