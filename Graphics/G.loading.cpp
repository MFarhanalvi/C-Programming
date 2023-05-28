#include<graphics.h>
#include<stdio.h>
#include<conio.h>
int main()
{
     initwindow(1275,720,"Windows BGI",350,80);
     int i;
     setcolor(WHITE);
     for(i=35;i<555;i++)
     {
         line(340+i,400,340+i,430);
     }
    for(i=35;i<555;i++){
        setcolor(GREEN);
        line(340+i,400,340+i,430);
        delay(0);

        setcolor(WHITE);
        settextstyle(9,0,5);
        outtextxy(400,450,"LOADING");
        delay(10);

        setcolor(rand()%16);
        settextstyle(SMALL_FONT,HORIZ_DIR,16);
        outtextxy(700,450,"...");
        delay(0);
    }
     settextstyle(9,0,3);
     outtextxy(400,500,"LOADING COMPLETED SUCCESSFULLY!");
     getch();
    closegraph();

}
