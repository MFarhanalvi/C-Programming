#include<conio.h>
#include<stdio.h>
void main()
{
	int n,a;
	printf("Enter a number:");
	scanf("%d",&a);
	n=a;
	do
	{
		printf("%d\n",n);
		n--;
	}
	while(n>=1);
	getch();
}
