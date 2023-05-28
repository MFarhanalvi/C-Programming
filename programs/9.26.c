#include<conio.h>
#include<stdio.h>
typedef struct 
{
	char name[20];
	int price;
}book;
void main()
{
	book b;
	printf("Enter author name:");
	fflush(stdin);
	gets(b.name);
	printf("Enter price:");
	fflush(stdin);
	scanf("%d",&b.price);
	fflush(stdin);
	printf("Author name:");
	puts(b.name);
	printf("Price:%d",b.price);
	getch();
	
}



