#include<conio.h>
#include<stdio.h>
void main()
{
	int a[5],s;
	printf("Enter five number\n");
	for (s=0;s<5;s++)
	scanf("%d",&a[s]);
	for(s=0;s<5;s++)
	a[s]>0?printf("Positive number\n"):printf("Negative number\n");

	getch();
}
