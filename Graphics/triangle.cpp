#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    setcolor(RED);
    line(100,100,200,400);
    setcolor(BLUE);
    line(100,100,500,100);
    setcolor(YELLOW);
    line(200,400,500,100);
    getch();
    closegraph();
    return(0);
}
