#include<conio.h>
#include<stdio.h>
void main()
{
	int x,y;
	printf("Enter two integer numbers:\n");
	scanf("%d%d",&x,&y);
	printf("Orignal value are\n x=%d \n y=%d\n",x,y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("The swapped value are \n x=%d \n y=%d",x,y);
	getch();
	
	
}
