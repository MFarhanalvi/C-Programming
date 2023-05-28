#include<stdio.h>
#include<conio.h>
void main()
{
	char name[30],*ptr,name2[30],*pt;
	printf("\tPlease Enter following Data:\n");
	printf("\n\tEnter your name:");
	gets(name);
	ptr=name;
	printf("\tYour name is %s\n",*&ptr);
	printf("\tEnter your Father name:");
	gets(name2);
	pt=name2;
	printf("\tYour Father name is %s",*&pt);
	printf("\n\tThanks!");
	getch();
}
