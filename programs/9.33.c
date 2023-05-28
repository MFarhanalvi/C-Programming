#include<conio.h>
#include<stdio.h>
int power(int x,int y);
void main()
{
	int n,a,s;
	printf("\tFor a^b power:?\n");
	printf("Enter two numbers:\n");
	scanf("%d%d",&n,&a);
	s=power(n,a);
	printf("%d^%d=%d",n,a,s);
	getch();
}
int power(int x,int y)
{
	if(y<=0)
	return 1;
	else if (y==1)
	return x;
	else
	return x*power(x,y-1);
}
