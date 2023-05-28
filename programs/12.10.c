#include<conio.h>
#include<stdio.h>
void main()
{
	char city[5][30];
	int i;
	for(i=0;i<5;i++)
	{
		printf("Enter city name:");
		gets(city[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n\t__________CITY_________\n\t");
	puts(city[i]);
}
getch();
}
