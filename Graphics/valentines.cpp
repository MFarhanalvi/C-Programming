#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void drawText();
void  baseBox();
void twinkle();
int main()
{
     initwindow(1275,720,"Windows BGI",350,80);
     baseBox();
     drawText();
     twinkle();
     getch();
    return(0);
}
void drawText()
{
    settextstyle(1,0,5);
    setcolor(RED);
    outtextxy(350,500,"HAPPY");
    outtextxy(460,550,"VALENTINE\'S");
    outtextxy(800,600,"DAY");
    setcolor(WHITE);

}
void baseBox()
{
    setfillstyle(10,BLUE);
    setcolor(RED);
    rectangle(250,430,1020,700);
    floodfill(650,650,RED);
    setcolor(WHITE);
}
/*
void drawHeart()
{
    setfillstyle(1,RED);
    setcolor(RED);
    ellipse(500,250,60,280,100,200);
    ellipse(600,250,280,480,100,200);
    line(430,430,635,430);
    floodfill(550,250,BLACK);
    setcolor(WHITE);
}
void man()
{
    circle(250,230,20);
    line(250,250,250,348);
    line(250,348,200,320);
    line(200,320,195,248);
    line(250,290,300,280);
    line(295,270,295,285);
    circle(295,265,5);
}
void girl()
{
    circle(350,180,20);
    line(350,200,350,348);
    line(350,240,310,250);
    line(350,280,370,340);
}
*/
void twinkle()
{
    int x=360,y=360,c=0,i=1;
    while(!kbhit()){
        putpixel(x+rand()%960,y+rand()%360,c+rand()%360);
         putpixel(x-rand()%960,y+rand()%360,c+rand()%360);
          putpixel(x+rand()%960,y-rand()%360,c+rand()%360);
           putpixel(x-rand()%960,y-rand()%360,c+rand()%360);
           drawText();

    }
}
