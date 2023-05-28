#include<conio.h>
#include<stdio.h>
void main()
{
	int n,c=1;
	printf("Enter table number:");
	scanf("%d",&n);
	while(c<=10)
	{
		printf("%d*%d=%d\n",n,c,n*c);
		c++;
	}

	getch();
}
