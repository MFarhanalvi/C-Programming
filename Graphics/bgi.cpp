#include<stdio.h>
#include<graphics.h>
int main()
{
    initwindow(1275,720,"Windows BGI",350,80);
    settextstyle(1,0,5);
    setfillstyle(10,BLUE);
    setcolor(RED);
    rectangle(50,350,580,500);
    setbkcolor(BLACK);
    outtextxy(60,400,"ALI RAZA JUTT");
    floodfill(100,400,RED);
     setcolor(WHITE);
    getch();
}
