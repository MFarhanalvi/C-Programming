#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void text();
void twinkle();
int main()
{
    DWORD screenWidth = GetSystemMetrics(SM_CXSCREEN);
    DWORD screenHeight = GetSystemMetrics(SM_CYSCREEN);
    initwindow(screenWidth,screenHeight,"",-3, -3);
        text();
        twinkle();
        getch();
     closegraph();
    return 0;
}
 void text()
 {
     int c,i,x=50,y=50;
     settextstyle(1,0,5);
    c=getmaxcolor();
    for(i=0;i<=c;i++){
    setcolor(i);
    outtextxy(x,y,"ALI RAZA JUTT");
    y=y+40;
    }
 }
void twinkle()
{
    int x=360,y=360,c=0,i=1;
    while(!kbhit()){
        putpixel(x+rand()%960,y+rand()%360,c+rand()%16);
         putpixel(x-rand()%960,y+rand()%360,c+rand()%16);
          putpixel(x+rand()%960,y-rand()%360,c+rand()%16);
           putpixel(x-rand()%960,y-rand()%360,c+rand()%16);
           text();
    }
}
