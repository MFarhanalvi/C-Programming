#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
    initwindow(1275,700,"Windows BGI",350,400);
    setcolor(BLUE);
    line(100,100,100,400);
    line(100,100,300,400);
    line(100,250,200,250);
    setcolor(RED);
    line(200,100,400,350);
    line(400,350,500,300);
    setcolor(YELLOW);
    line(400,80,550,280);
    setcolor(WHITE);
    circle(383,60,5);
    getch();
    closegraph();
    return(0);
}
