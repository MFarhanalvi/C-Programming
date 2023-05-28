#include<conio.h>
#include<stdio.h>
struct book
{
	int bookid;
	char title[20];
	float price;
 };
 struct book input()
 {
 	struct book b;
 	printf("Enter Book ID:");
 	scanf("%d",&b.bookid);
 	fflush(stdin);
 	printf("Enter Title:");
 	gets(b.title);
 	printf("Enter Price:");
 	scanf("%f",&b.price);
 	return(b);
  } 
  void display(struct book b)
  {
  	printf("\n\nBOOK ID=%d\nBook Title=%s\nBook Price=%fRs",b.bookid,b.title,b.price);
  }
void main()
{
	struct book b1;
	b1=input();
	display(b1); 
    getch();	
}
