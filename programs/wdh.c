#include<conio.h>
#include<stdio.h>
void main()
{
	int h,w,d;
	printf("Enter number of hours=");
	scanf("%d",&h);
	w=h/168;
	h=h%168;
	d=h/24;
	h=h%24;
	printf("Weeks:%d\n",w);
	printf("Days:%d\n",d);
	printf("Hours:%d\n",h);
	getch();
	
	
}
