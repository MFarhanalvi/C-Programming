#include<stdio.h>
#include<graphics.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    setfillstyle(1,CYAN);
    setcolor(RED);
    fillellipse(150,300,50,130);
    getch();
    closegraph();
    return 0;
}
