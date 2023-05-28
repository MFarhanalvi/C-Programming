#include<conio.h>
#include<stdio.h>
typedef struct
{
	char name[20];
	int age;
}Stud;
void main()
{
	Stud s1;
	printf("Enter your name:");
	scanf("%s",&s1.name);
	fflush(stdin);
	printf("Enter your age:");
	scanf("%d",&s1.age);
	getch();
}
