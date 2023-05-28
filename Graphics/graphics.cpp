#include<graphics.h>
#include<stdio.h>
#include<conio.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"c:\\winbgi");
    setcolor(LIGHTMAGENTA);
    circle(400,200,100);
    getch();
    closegraph();
    return 0;

}
