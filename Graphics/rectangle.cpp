#include<graphics.h>
#include<stdio.h>
#include<conio.h>
int main()
{
    system("color 0a");
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"c:\\bgi");
    setcolor(LIGHTGREEN);
    circle(200,200,100);
    rectangle(300,50,450,100);
    line(250,80,350,160);
    getch();
    closegraph();
    return 0;
}
