#include<stdio.h>
#include<conio.h>
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
    system("color 0b");
	int x=30,y=10;
	char ch;
	printf("FOR EXIT PRESS E:");
	gotoxy(x,y);
	printf("ALI RAZA");
	while(1)
	{
		ch=getch();
		switch(ch)
		{
			case 'a':
				x--;
				break;
			case's':
				y++;
				break;
			case'd':
				x++;
				break;
			case'w':
				y--;
				break;
			case 'e':
			exit(0);
		}
		system("cls");
		gotoxy(x,y);
		printf("ALI RAZA");
	}

}
