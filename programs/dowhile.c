#include<conio.h>
#include<stdio.h>
void main()
{
	int m,n,a;
	printf("Enter length of triangle=");
	scanf("%d",&a);
	m=a;
	do
	{
		n=m;
		do
		{
			printf("%d ",m);
			n--;
		}
		while(n>=1);
		printf("\n");
		m--;
	}
	while (m>=1);
	getch();
}
