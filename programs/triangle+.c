#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j,s,r;
	printf("Enter number of Rows:");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		printf("1");
		s=1;
		for(j=2;j<=i;j++)
		{
			printf("+%d",j);
			s=s+j;
		}
		printf("=%d\n",s);
	}
	getch();
}

