#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j,a;
	printf("Enter height of triangle=");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=i;j++)
		printf("*");
		printf("\n");
	}
	getch();
}
