#include<conio.h>
#include<stdio.h>
void main()
{
	int x,y,z;
	printf("Enter two number\n");
	printf("Ist digit=");
	scanf("%d",&x) ;
	printf("2nd digit=");
	scanf("%d",&y);
	z=x/y;
	printf("Division of digits are=%d",z);
	getch();
}
