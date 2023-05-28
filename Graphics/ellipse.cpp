#include<graphics.h>
#include<stdio.h>
#include<conio.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    setcolor(4);
    ellipse(250,250,0,360,50,150);
    setcolor(6);
    ellipse(280,280,0,360,150,50);
    getch();
    closegraph();
    return 0;

}

