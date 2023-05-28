#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j,a;
	printf("Enter the height of triangle=");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		for(j=i;j>1;j--)
		{
		printf(" ");
	}
		for(j=1;j<=a+1-i;j++)
		{
		printf("%d",j);
	}
		printf("\n");
	}
	getch();
}
