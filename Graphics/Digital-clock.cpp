#include<stdio.h>
#include<graphics.h>
#include<time.h>
int main()
{
    initwindow(500,200,"Windows BGI",350,80);
    time_t rawTime;
    struct tm * currentTime;
    char a[100];
    while(1)
    {
     rawTime=time(NULL);
     currentTime=localtime(&rawTime);
     setcolor(BLUE);
     strftime(a,100,"%I:%M:%S",currentTime);
     settextstyle(9,0,8);
     outtextxy(10,50,a);
     setcolor(YELLOW);
     strftime(a,100,"%p",currentTime);
     settextstyle(1,HORIZ_DIR,5);
     outtextxy(10,8,a);
     setcolor(BLUE);
     strftime(a,100,"%a,%d %b,%Y",currentTime);
     outtextxy(30,140,a);
     delay(100);
    }
    getch();
    closegraph();
    return 0;
}
