#include<stdio.h>
#include<conio.h>
#include<windows.h>
void main()
{
    system("color 0f");
	char str[50]={"A QUICK BROWM FOX JUMPS OVER THE LAZY DOG."};
	puts(str);
	char ch,*ptr,s;
	s='n';
	ptr=str;
	printf("Enter any character to find:");
	scanf("%c",&ch);
	while(*ptr++!='\0')
	if(*ptr==ch)
	s='y';
	if(s=='y')
	printf("The character is find in the array:");
	else
	printf("The character is not find the array:");
	getch();
}
