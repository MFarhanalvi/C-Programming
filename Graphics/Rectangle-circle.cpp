#include<graphics.h>
#include<stdio.h>
#include<conio.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"c:\\bgi");
    setcolor(LIGHTBLUE);
    circle(200,200,100);
    setcolor(LIGHTGREEN);
    rectangle(300,50,450,100);
    setcolor(LIGHTRED);
    line(250,80,350,160);
    getch();
    closegraph();
    return 0;
}
