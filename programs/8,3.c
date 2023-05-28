#include<conio.h>
#include<stdio.h>
typedef struct
{
	int id;
	int pages;
	float price;
}book;
void main()
{
	book b,b2;
	printf("1.Enter ID,Pages and price of book:");
	scanf("%d\t %d\t %f",&b.id,&b.pages,&b.price);
    printf("2.Enter ID,Pages and price of book:");
	scanf("%d\t %d\t %f",&b2.id,&b2.pages,&b2.price);
	printf("\n\n\nThe most costly book is as follows:\n");
	if(b.price>b2.price)
	{
	printf("Book ID:%d\n",b.id);
	printf("Pages:%d\n",b.pages);
	printf("Price:%fRs\n",b.price);
}
	else
    {
	printf("Book ID:%d\n",b2.id);
	printf("Pages:%d\n",b2.pages);
	printf("Price:%fRs\n",b2.price);
    }
	getch();
}
