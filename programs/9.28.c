#include<conio.h>
#include<stdio.h>
typedef struct
{
	char name[15];
	int pages;
	int price;
}book;
void check(book x,book y);
void main()
{
	book b,b2;
	printf("\tFor 1st Book:\n");
	printf("Enter author name:");
	fflush(stdin);
	gets(b.name);
	printf("Enter pages:");
	fflush(stdin);
	scanf("%d",&b.pages);
	printf("Enter Price:");
	fflush(stdin);
	scanf("%d",&b.price);
	printf("\t For 2nd Book:\n");
	printf("Enter author name:");
	fflush(stdin);
	gets(b2.name);
	printf("Enter pages:");
	fflush(stdin);
	scanf("%d",&b2.pages);
	printf("Enter Price:");
	fflush(stdin);
	scanf("%d",&b2.price);
	printf("\tThe most costly book:\n");
    check(b,b2);

	getch();
}
 void check(book x,book y)
 {
	if(x.price>y.price)
	{
	printf("Authors Name:");
	puts(x.name);
    printf("Price:%d\n",x.price);
	printf("Pages:%d\n",x.pages);
	}
	else
	{
	printf("Authors Name:");
	puts(y.name);
    printf("Price:%d\n",y.price);
	printf("Pages:%d\n",y.pages);
	}
}

