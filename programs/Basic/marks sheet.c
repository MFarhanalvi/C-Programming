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
	gotoxy(20,8);
	printf("MARKS SHEET FOR Fsc RESULT \n");
    int a,s,d,f,j,k,l;
	printf("Marks in English=");
	scanf("%d",&a);
	a<66?printf("Fail!\n"):printf("Pass!\n");
	printf("Marks in Urdu=");
	scanf("%d",&s);
	s<66?printf("Fail!\n"):printf("Pass!\n");
	printf("Marks in Mathematics=");
	scanf("%d",&d);
	d<66?printf("Fail!\n"):printf("Pass!\n");
	printf("Marks in Physics=");
	scanf("%d",&f);
	d<66?printf("Fail!\n"):printf("Pass!\n");
	printf("Marks in Chemistry=");
	scanf("%d",&j);
	j<66?printf("Fail!\n"):printf("Pass!\n");
	printf("Marks in islamiyat=");
	scanf("%d",&k);
	k<17?printf("Fail!\n"):printf("Pass!\n");
	printf("Marks in Pak Studies=");
	scanf("%d",&l);
	l<17?printf("Fail!\n"):printf("Pass!\n");
	a+s+d+f+j+k+l;
	printf("Total Marks=%d\n",a+s+d+f+j+k+l);
	a+s+d+f+j+k+l>660?printf("congratulations to you!\nYou have passed!"):printf("You have failed!\n Grade D\n");
	getch();
}
