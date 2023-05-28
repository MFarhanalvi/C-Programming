#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<windows.h>
void main()
{
    system("color 0c");
    char s[20];
    printf("Enter your name:");
    gets(s);
    strlwr(s);
    printf("Your Name is:%s",s);
    getch();
}
