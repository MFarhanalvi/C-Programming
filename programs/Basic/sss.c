#include<conio.h>
#include<stdio.h>
void main()
{
	int x,y;
	printf("Enter number OF PRODUCTS=");
	scanf("%d",&x);
	printf("ENTER PRICE OF PRODUCTS=");
	scanf("%d",&y);
	printf("TOTAL PRICE %d*%d=%d Rs",x,y,x*y);
	getch();
}
