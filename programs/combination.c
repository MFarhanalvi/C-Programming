#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j,k,a;
	printf("Enter a number for combination:");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=a;j++)
		{
			for(k=1;k<=a;k++)
			printf("%d%d%d\t",i,j,k);
		}
	}
	getch();
}
