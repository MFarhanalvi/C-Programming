#include<conio.h>
#include<stdio.h>
void table(int n);
void main()
{
	int a;
	printf("Enter table number:");
	scanf("%d",&a);
	table(a);
	getch();
}
void table(int n)
{
	int c;
	for(c=1;c<=10;c++)
	{
		printf("%d*%d=%d\n",n,c,n*c);
	}
}
