#include<conio.h>
#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter two numbers\n");
	printf("Ist number=");
	scanf("%d",&x);
	printf("2nd number=");
	scanf("%d",&y);
	printf("Greater number is =%d",x>y?x:y);
	getch();
}
