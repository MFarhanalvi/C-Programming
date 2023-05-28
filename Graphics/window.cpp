#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{

    initwindow(1275,720,"Windows BGI",350,80);
    setcolor(BLUE);
    setfillstyle(1,RED);
    rectangle(550,300,850,400);
    line(550,400,850,400);
    line(700,300,700,500);
    rectangle(550,400,850,500);
    floodfill(800,400,BLUE);
    getch();
    return  0;
}
