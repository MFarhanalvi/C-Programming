#include<stdio.h>
#include<windows.h>
#include<conio.h>
void main()
{
    system("color 0c");
    char a[10],s[10];
    int r;
    printf("\n\tEnter 1st string:");
    gets(a);

    printf("\tEnter 2nd string:");
    gets(s);

    r=strcmp(a,s);
    if(r==0)
        printf("\tSTRINGS ARE EQUAL:");
        else
            printf("\tSTRINGS ARE NOT EQUAL:");
    getch();
}
