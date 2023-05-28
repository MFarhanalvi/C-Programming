 #include<conio.h>
 #include<stdio.h>
 typedef struct
 {
 	char name[30];
 	int pages;
 	int price;
 }book;
 void main()
 {
 	book b,*ptr;
 	ptr=&b;
 	printf("\t______Book Record_____\n");
 	printf("Enter Author name:");
 	gets(b.name);
 	printf("Enter Pages:");
 	scanf("%d",&b.pages);
 	printf("Enter Price:");
 	scanf("%d",&b.price);
 	printf("\tAuthor:%s",*&ptr->name);
 	printf("\n\tPages:%d",*&ptr->pages);
 	printf("\n\tPrice:%d",*&ptr->price);
 	getch();
 }
