#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	system("color 0B");
	char s[30];
	printf("Enter your name:");
	gets(s);
	strrev(s);
	printf("%s",s);
	getch();
}
