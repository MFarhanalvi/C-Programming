#include<conio.h>
#include<stdio.h>
void main() 
{
	int i,j,a;
	printf("Enter height of triangle=");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		j=i;
		while(j<=a)
		{
		printf("*");
		j++;
	}
	printf("\n");
}
getch();
}

