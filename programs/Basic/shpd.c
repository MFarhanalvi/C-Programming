#include<conio.h>
#include<stdio.h>
void main()
{
	printf("SHOP PROGRAM \n");
	int x,y,z,t;
	printf("Enter number 0f products=");
	scanf("%d",&x);
	printf("ENTER PRICE OF PRODUCTS=");
	scanf("%d",&y);
	t=x*y;
	printf("PRICE =%dRS\n",t);
	t>1000?printf(" ENTER Discount Price= "),scanf("%d",&z),printf("Total Rupees=%dRS",t-z):printf("No Discount!\n");
	getch();
}
