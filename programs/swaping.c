#include<conio.h>
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter 1st number a:");
	scanf("%d",&a);
	printf("Enter 2nd number b:");
	scanf("%d",&b);
	printf("Input numbers are\n a=%d \n b=%d\n",a,b);
	c=a;
	a=b;
	b=c;
	printf("Values after swaffing are\n a=%d \n b=%d",a,b);
	getch();
	
	
	
}
