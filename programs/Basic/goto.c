#include<conio.h>
#include<stdio.h>
#include<windows.h>
  void gotoxy(int x,int y )
  {
 	COORD c;
	c.X=x;
	c.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
  }
int main()
{
    int i;
    for(i=1;i<=10;i++)
	{
     gotoxy(40,i);
	printf("Ali Raza jutt");
	}

	getch();
}

