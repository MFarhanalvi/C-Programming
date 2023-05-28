#include<conio.h>
#include<stdio.h>
void main()
{
	int x,y,cube;
	printf("Enter two numbers:\n");
    printf("Ist digit=");
	scanf("%d",&x);
    printf("2nd digit=");
	scanf("%d",&y);
 	cube=x*x*x+y*y*y;
	printf("sum of the cubes are = %d",cube);
	getch();
}
