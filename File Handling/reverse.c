#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a;
	system("color 0e");
	printf("For Reverse numbers:\n");
	printf("Enter a number:");
	scanf("%d",&a);
	for(i=a;i>=1;i--)
	printf("%d ",i);
	getch();
}
