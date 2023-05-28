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
	int x;
	gotoxy(20,10);
	printf("Enter Password ");
	scanf("%d",&x);
	x==7860?gotoxy(20,12),printf("Ali Raza jutt\nID Number 32203-567439-1\nTHANK YOU!"):printf("Wrong  Password\nSorry!\n Try Again");
	getch();
}
