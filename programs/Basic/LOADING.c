#include<stdio.h>
#include<windows.h>
#include<process.h>
#include<conio.h>
void gotoxy(int x,int y)
{
    COORD coord;
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
int main()
{
    int r,q;
    system("color 0A");
    gotoxy(50,18);
    printf("LOADING...");
    gotoxy(50,20);
    for(r=1;r<=30;r++)
    {
        for(q=0;q<=100000000;q++);
        printf("%c",220);
    }
    getch();
    return(0);
}
