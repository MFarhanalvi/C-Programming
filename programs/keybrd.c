#include<conio.h>
#include<stdio.h>
void main()
{
	char c;
	printf("Enter any character from keyboard:");
	scanf("%c",&c);
	if ((c>='A') && (c<='Z'))
    printf("The character %c is a capital alphabet letter.",c);
	else if ((c>='a')&&(c<='z'))
	printf("The character %c is a small letter.",c );
    else  if ((c>='0')&&(c<='9'))
    printf("The character %c is a digit.",c);
    else
    printf("The character is a symbol.",c);
    getch();
}

