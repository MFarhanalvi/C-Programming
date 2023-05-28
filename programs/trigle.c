#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j,a,s;
	printf("Enter height of triangle=");
	scanf("%d",&s);
	for(i=s;i>=1;i--)
	{
		for(a=1;a<=s-i;a++)
		{
		printf(" ");
	}
		for(j=1;j<=i;j++)
		{
		printf("*");
	}
		printf("\n");
	}
	getch();
}
