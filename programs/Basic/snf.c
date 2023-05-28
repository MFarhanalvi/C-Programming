#include<conio.h>
#include<stdio.h>
void main()
{
	int x,y,z;
	printf("Enter two number \n");
	printf("Ist digit=");
	scanf("%d",&x);
	printf("2nd digit=");
	scanf("%d",&y);
    z=x*x-y*y;
	printf("subtract of the squares=%d",z);
	getch();
}
