#include<conio.h>
#include<stdio.h>
typedef struct
{
	int id;
	int pages;
	int price;
}book;
void main()
{
	book b[5];
	int i,max,m;
	for(i=0;i<5;i++)
	{
	printf("Enter book ID:");
	scanf("%d",&b[i].id);
	printf("Enter book Pages:");
	fflush(stdin);
	scanf("%d",&b[i].pages);
	printf("Enter book Price:");
	fflush(stdin);
	scanf("%d",&b[i].price);
	fflush(stdin);
}
	max=b[0].price;
	m=0;
	for(i=0;i<5;i++)
	if(b[i].price>max)
	{
		max=b[i].price;
		m=i;
}
 	
    printf("\n\t\tThe record of most costly book:\n");
	printf("\t\tBook ID:%d\n",b[m].id);
	printf("\t\tPages:%d\n",b[m].pages);
	printf("\t\tPrice:%dRS",b[m].price);
	getch();
}


