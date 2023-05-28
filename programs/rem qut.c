#include<conio.h>
#include<stdio.h>
void main()
{
	
	int x,y,r,q;
	printf("Enter dividend number:");
	scanf("%d",&x);
	printf("Enter divisor number:");
	scanf("%d",&y);
	q=x/y;
	r=x%y;
	printf("Quotient=%d\n",q);
	printf("Remainder=%d",r);
	getch();
}
