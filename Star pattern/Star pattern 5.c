#include<stdio.h>
#include<conio.h>
#include<windows.h>
void main()
{
	system("color 0b");
	int i,j,r;
	printf("Enter number of rows:");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
	for(j=1;j<=2*r-1;j++)
	{
		if(j>=r+1-i&&j<=r-1+i)
		printf("*");
		else
		printf(" ");
	}
	printf("\n");
	}
	getch();
}
