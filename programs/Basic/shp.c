#include<conio.h>
#include<stdio.h>
#include<windows.h>
void gotoxy(int x,int y)
  {
 	COORD c;
	c.X=x;
	c.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
  }
void main()
{
	int x,y,z;
	gotoxy(20,10);
	printf("Enter number 0f products=");
	scanf("%d",&x);
	gotoxy(21,11);
	printf("ENTER PRICE OF a PRODUCT=");
	scanf("%d",&y);
	gotoxy(22,12);
	printf(" PRICE =%dRs \n",x*y);
	x*y>5000?gotoxy(23,13),printf(" ENTER G.S.TAX VALUE= "),scanf("%d",&z),gotoxy(24,14),printf(" TOTAL Rupees =%d Rs",x*y+z):printf("No Tax!");
	getch();
}
