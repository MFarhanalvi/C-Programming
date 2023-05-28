#include<stdio.h>
#include<graphics.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
   int points[8]={100,100,200,200,100,200,100,100};
    setcolor(YELLOW);
    setfillstyle(1,RED);
    fillpoly(4,points);
    int point[6]={100,100,200,100,200,200};
     setcolor(YELLOW);
     setfillstyle(1,BLUE);
     fillpoly(3,point);
     getch();
    closegraph();
    return 0;
}
