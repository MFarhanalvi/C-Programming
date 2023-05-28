#include<conio.h>
#include<stdio.h>
int multiplication(int a,int b);
void main()
{
	int s,x,y;

	printf("Enter two numbers=\n");
	scanf("%d%d",&x,&y);
	s=multiplication(x,y);
	printf("Answer=%d",s);
	getch();
}
   int multiplication(int a,int b)
{
	int c;
	c=a*b;
	return (c);

}

