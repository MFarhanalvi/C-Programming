#include<conio.h>
#include<stdio.h>
typedef struct
{
	char name[50];
	float pop;
}Pop;
void main()
{
	Pop c,c2;
	printf("1.Enter country name:");
	fflush(stdin);
	scanf("%s",&c.name);
	printf("1.Enter country population in millions:");
	fflush(stdin);
	scanf("%f",&c.pop);
	printf("2.Enter country name:");
	fflush(stdin);
	scanf("%s",&c2.name);
	printf("2.Enter country population in millions:");
	fflush(stdin);
	scanf("%f",&c2.pop);
	printf("The country with more population::\n");
	if(c.pop>c2.pop)
	{
	fflush(stdin);
	printf("Name:%s\n",c.name);
	printf("Population:%f millions",c.pop);
}
	else
	{
	printf("Name:%s\n",c2.name);
	printf("Population:%f millions",c2.pop);
	}
	getch();
}



