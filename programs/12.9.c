#include<conio.h>
#include<stdio.h>
void main()
{
	char name[20],second[20],full[30];
	int i,j;
	i=j=0;
	printf("\n\tEnter your first name:");
	gets(name);
	printf("\tEnter your second name:");
	gets(second);
	printf("\tyour first name:");
	puts(name);
	printf("\tyour second name:");
	puts(second);
	while(name[i]!='\0')
	{
		full[i]=name[i];
		i++;
	}
	while(second[j]!='\0')
	{
		full[i]=second[j];
		i++;
		j++;
	}
	printf("\t____________________________\n");
	printf("\n\tYour full name is:");
	puts(full);
	getch();
}
