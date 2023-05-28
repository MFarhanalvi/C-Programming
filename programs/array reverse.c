#include<conio.h>
#include<stdio.h>
void main()
{
	int a[5],i;
	for(i=1;i<=5;i++)
	{
	printf("Enter a number:");
	scanf("%d",&a[i]);
}
	printf("The array in actual order:\n");
	for(i=1;i<=5;i++)
	printf("%d ",a[i]);
	printf("\nThe array in reverse order:\n");
	for(i=5;i>=1;i--)
	printf("%d ",a[i]);
	getch();
}
