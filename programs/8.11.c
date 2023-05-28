#include<conio.h>
#include<stdio.h>
typedef struct
{
	int d; int m; int y;
}date;
typedef struct
{
	char name[25],city[25];
	int tele;
	date birth;
}phonebook;
void main()
{
	phonebook B;
	printf("\n\n\t\t______##PhoneBook##_____\n\n\n");
	printf("\tEnter your name:");
	scanf("%c",&B.name);
	printf("\tEnter your city:");
	fflush(stdin);
	scanf("%c",&B.city);
	printf("\tEnter your Telephone number:");
	fflush(stdin);
	scanf("%d",&B.tele);
	printf("\tEnter Date of Birthday(dd/mm/yy):");
	fflush(stdin);
	scanf("%d/%d/%d",&B.birth.d,&B.birth.m,&B.birth.y);
	printf("\tYour Birthday is on :%d/%d/%d\n",B.birth.d,B.birth.m,B.birth.y);
	printf("\tCongratulations to you!");
	getch();
}
