#include<conio.h>
#include<stdio.h>
void swap(int,int);
void main()
{
	int a,b;
	printf("Enter an Integer:");
	scanf("%d",&a);
	printf("Enter an Integer:");
	scanf("%d",&b);
	printf("Values before swapping...\n");
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	swap(a,b);
    getch();
}
void swap (int x,int y)
{

   int t;
   t=x;
   x=y;
   y=t;
   	printf("vlaues after swapping...\n");
    printf("a=%d\n",x);
    printf("b=%d",y);
}
