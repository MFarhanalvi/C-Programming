#include<conio.h>
#include<stdio.h>
void main()
{
	int n[5],i;
	printf("Enter five integer:\n");
	for(i=0;i<5;i++)
	scanf("%d",&n[i]);
	printf("The values in array:\n");
	for(i=0;i<5;i++)
	printf(" %d",n[i]);
	getch();
}
