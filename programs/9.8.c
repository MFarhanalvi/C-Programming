#include<conio.h>
#include<stdio.h>
void show(int,char);
void main()
{
	int n;
	char c;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("Enter a character:");
	fflush(stdin);
	scanf("%c",&c);
	show(n,c);
	getch();
}
void show(int a,char c)
{
	int i,j;
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=a;j++)
		printf("%c",c);
		printf("\n");
}
}
