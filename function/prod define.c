#include<conio.h>
#include<stdio.h>
#define prod(a,s) a*s
void main()
{
	int a,s;
	printf("Enter 1st number:");
	scanf("%d",&a);
	printf("Enter 2nd number:");
	scanf("%d",&s);
	printf("product=%d",prod(a,s));
	getch();
}
